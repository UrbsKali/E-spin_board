# Copyright 2014-present PlatformIO <contact@platformio.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os
from platformio.public import PlatformBase

class EspinPlatform(PlatformBase):
    
    def configure_default_packages(self, variables, targets):
        # This platform is a wrapper around "espressif32"
        # Since we cannot inherit directly in Python easily without the package installed,
        # we rely on PlatformIO's package manager to handle the dependencies defined in platform.json
        # and we must ensure the board config is correct.
        
        # If the user selects a board from this platform, we need to ensure 
        # the framework and toolchain are available.
        # The 'espressif32' packages are defined in platform.json
        return super().configure_default_packages(variables, targets)

    def get_boards(self, id_=None):
        result = super().get_boards(id_)
        if not result:
            return result
        
        # Patch the board definition to point to the correct variant directory
        # This is critical because the variants are inside THIS platform package,
        # not in the framework package.
        platform_dir = self.get_dir()
        
        # If we are looking for a specific board or listing all
        if id_:
            self._patch_board_variant(result, platform_dir)
        else:
            for key in result:
                self._patch_board_variant(result[key], platform_dir)
                
        return result

    def _patch_board_variant(self, board_config, platform_dir):
        # We only patch our specific board
        if board_config.id == "e_spin":
            # If the variant is defined, we ensure the builder knows where to find it.
            # Standard Espressif32 builder looks in framework's variants/ folder.
            # We want it to use OUR variants/ folder.
            
            # We can't easily change the logic of the builder script (main.py from espressif32),
            # but we can try to inject the path via 'variants_dir' option if supported,
            # or we rely on 'framework-arduinoespressif32' being patched?
            
            # The cleanest way for a custom platform to provide variants 
            # is to set 'build.variants_dir' in the board config dynamically
            # if it wasn't set in the JSON.
            
            variants_dir = os.path.join(platform_dir, "variants")
            
            # Update the manifest dictionary - this affects the 'board' object used by PIO
            # Note: access internal dictionary of the BoardConfig object if needed, 
            # but here board_config is likely a BoardConfig object or dict.
            # BoardConfig object has 'manifest' attribute.
            
            if hasattr(board_config, "manifest"):
                if "build" not in board_config.manifest:
                    board_config.manifest["build"] = {}
                board_config.manifest["build"]["variants_dir"] = variants_dir
            elif isinstance(board_config, dict):
                 if "build" not in board_config:
                    board_config["build"] = {}
                 board_config["build"]["variants_dir"] = variants_dir

