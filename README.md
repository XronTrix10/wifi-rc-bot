<img style="border-radius:20px;" src="https://user-images.githubusercontent.com/98148986/215330952-fe20a968-042e-4fcf-b7df-bcbfcf8cc1d3.png">

<br>

<h1 align="center" >Code for esp8266 to build a Wifi controlled car using BTS7960B Motor Driver</h1>

<br>

## Requirements

- NodeMCU ( esp8266 ) - 1pcs
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

<br>

<h2 align="center"> <a href="https://play.google.com/store/apps/details?id=com.bluino.esp8266wifirobotcar&hl=en_US&gl=US">Android app</a> to control
the car </h2>

<br>

## Pin Diagram

<table>
    <tr>
        <th>NodeMCU</th>
        <th>BTS7960B</th>
        <th>Details</th>
    </tr>
    <tr>
        <td> <b>D3</b> (Optional) </td>
        <td> <b>R_IS & L_IS (Both Drivers)</b> </td>
        <td> Side Current Output (Active Low) </td>
    </tr>
    </tr>
    <tr>
        <td> <b>D4</b> (Required) </td>
        <td> <b>R_EN & L_EN (Both Drivers)</b> </td>
        <td> Rotation Enable Pins (Active High) </td>
    </tr>
    </tr>
    <tr>
        <td> <b>D5</b> (Required) </td>
        <td> <b>LPWM (1st BTS7960B)</b> </td>
        <td> 1st BTS7960B Forward Rotation PWM </td>
    </tr>
    </tr>
    <tr>
        <td> <b>D6</b> (Required) </td>
        <td> <b>RPWM (1st BTS7960B)</b> </td>
        <td> 1st BTS7960B Reverse Rotation PWM </td>
    </tr>
    </tr>
    <tr>
        <td> <b>D7</b> (Required) </td>
        <td> <b>LPWM (2nd BTS7960B)</b> </td>
        <td> 2nd BTS7960B Forward Rotation PWM </td>
    </tr>
    </tr>
    <tr>
        <td> <b>D8</b> (Required) </td>
        <td> <b>RPWM (2nd BTS7960B)</b> </td>
        <td> 2nd BTS7960B Reverse Rotation PWM </td>
    </tr>
</table>