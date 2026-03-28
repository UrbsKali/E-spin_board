# Pin description

Here is the pin function on the E-Spin :

| Pin n° | ESP GPIO n° | E-SPIN GPIO n° | Function 1 (default) | Function 2 | Function 3 |
| ------ | ----------- | -------------- | -------------------- | ---------- | ---------- |
| 18     | 0           | 1              | ADC1_CH0             | XTAL_32K_P |            |
| 17     | 1           | 2              | ADC1_CH1             | XTAL_32K_N | FSPIQ      |
| 16     | 2           | NC (BAT read)  | ADC1_CH2             | GPIO2      |            |
| 15     | 3           | 3              | ADC1_CH3             | GPIO3      |            |
| 3      | 4           | 4              | GPIO4/SCL            | ADC1_CH4   | FSPIHD     |
| 4      | 5           | 5              | GPIO5/SDA            | ADC2_CH0   | FSPIWP     |
| 5      | 6           | 6              | GPIO6                |            | FSPICLK    |
| 6      | 7           | 7              | GPIO7                |            |            |
| 7      | 8           | 8              | Interrupt pin of IMU |            |            |
| 8      | 9           | 9              | Boot Button          |            |            |
| 10     | 10          | 10             | RGB LED              |            |            |
| 13     | 18          | NC             | USB D-               |            |            |
| 14     | 19          | NC             | USB D+               |            |            |
