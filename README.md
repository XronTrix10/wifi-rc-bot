# NodeMCU-BTS7960B

<img src="https://user-images.githubusercontent.com/98148986/215330952-fe20a968-042e-4fcf-b7df-bcbfcf8cc1d3.png">

### Code for esp8266 to build a Wifi controlled car using  BTS7960B 

## Requirements
- NodeMCU ( esp8266 )   - 1pcs
- BTS7960B Motor Driver - 2pcs
- 12-24v DC Motors - 2/4 pcs
- Jumper wires
- Powersupply according to Motors
- 5v Power supply for Nodemcu and BTS7960B

## Additional Board Manager URL for NodeMCU: 
    http://arduino.esp8266.com/stable/package_esp8266com_index.json

## Default Wifi Station credentials of NodeMCU:

SSID:

    RC_PowerCAR
Password:

    connect_me

## [Android app](https://play.google.com/store/apps/details?id=com.bluino.esp8266wifirobotcar&hl=en_US&gl=US) to control the car

## Pin Diagram

|NodeMCU | BTS7960B  | Details
| :----- | :---------- | :------
|**D3** (Optional) | **R_IS & L_IS (Both Drivers)** | Side Current Output (Active Low) 
|**D4** (Required) | **R_EN & L_EN (Both Drivers)** | Rotation Enable Pins (Active High)   
|**D5** (Required) | **LPWM (1st BTS7960B)**  | 1st BTS7960B Forward Rotation PWM
|**D6** (Required) | **RPWM (1st BTS7960B)** | 1st BTS7960B Reverse Rotation PWM
|**D7** (Required) | **LPWM (2nd BTS7960B)**  | 2nd BTS7960B Forward Rotation PWM
|**D8** (Required) | **RPWM (2nd BTS7960B)** | 2nd BTS7960B Reverse Rotation PWM