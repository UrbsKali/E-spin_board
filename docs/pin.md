# Pin description

Here is the pin function on the E-Spin :

| Pin n° | ESP GPIO n° | E-SPIN GPIO n° | Function 1 (default) | Function 2 | Function 3 |
| ------ | ----------- | -------------- | -------------------- | ---------- | ---------- |
| 12     | 0           | 5              | ADC1_CH0             | XTAL_32K_P |            |
| 13     | 1           | 6              | ADC1_CH1             | XTAL_32K_N | FSPIQ      |
| 5      | 2           | NC (BAT read)  | ADC1_CH2             | Digital IO |            |
| 6      | 3           | NC             | ADC1_CH3             | Digital IO |            |
| 18     | 4           | 1 (LED)        | MTMS                 | ADC1_CH4   | FSPIHD     |
| 19     | 5           | 1/SDA          | MTDI                 | ADC2_CH0   | FSPIWP     |
| 20     | 6           | 2/SCL          | MTCK                 |            | FSPICLK    |
| 21     | 7           | 3              | MTDO                 |            |            |
| 22     | 8           | 4              | Digital IO           |            |            |
| 23     | 9           | NC             | Boot Button          |            |            |
| 26     | 18          | NC             | USB D-               |            |            |
| 27     | 19          | NC             | USB D+               |            |            |

MT** need to be reconfigured to be used as GPIO, as by default they are used for JTAG debugging. Using the USB JTAG, we can simply remove those functions from the pins.
