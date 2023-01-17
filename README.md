# NodeMCU-BTS7960B

### Code for esp8266 to build a Wifi controlled car using  BTS7960B 

## Requirements
- NodeMCU ( esp8266 )   - 1pcs
- BTS7960B Motor Driver - 2pcs
- 12-24v DC Motors - 2/4 pcs
- Jumper wires
- Powersupply according to Motors
- 5v Power supply for Nodemcu and BTS7960B

[Android app](https://play.google.com/store/apps/details?id=com.bluino.esp8266wifirobotcar&hl=en_US&gl=US) to control the car

## Pin Diagram

|NodeMCU | BTS7960B  | Details
| :----- | :---------- | :------
|**D3** | **R_IS & L_IS (Both Drivers)** | Side Current Output (Active Low) 
|**D4** | **R_EN & L_EN (Both Drivers)** | Rotation Enable Pins (Active High)   
|**D5** | **LPWM (1st BTS7960B)**  | 1st BTS7960B Forward Rotation PWM
|**D6** | **RPWM (1st BTS7960B)** | 1st BTS7960B Reverse Rotation PWM
|**D7** | **LPWM (2nd BTS7960B)**  | 2nd BTS7960B Forward Rotation PWM
|**D8** | **RPWM (2nd BTS7960B)** | 2nd BTS7960B Reverse Rotation PWM