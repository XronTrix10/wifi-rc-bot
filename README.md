<img style="border-radius:20px;"
    src="https://user-images.githubusercontent.com/98148986/215330952-fe20a968-042e-4fcf-b7df-bcbfcf8cc1d3.png">

<br>

<h1 align="center">Code for esp8266 to build a Wifi controlled car using BTS7960B Motor Driver</h1>

<br>

## Requirements

- NodeMCU ( esp8266 ) - 1pcs
- BTS7960B Motor Driver - 2pcs
- 12-24v DC Motors - 2/4 pcs
- Jumper wires
- Powersupply according to Motors
- 5v Power supply for Nodemcu and BTS7960B

## Additional Board Manager URL for NodeMCU:

<pre>http://arduino.esp8266.com/stable/package_esp8266com_index.json</pre>

## Default Wifi Station credentials of NodeMCU:

SSID:

<pre>RC_PowerCAR</pre>

Password:

<pre>connect_me</pre>

<br>

<h2 align="center"> <a
        href="https://play.google.com/store/apps/details?id=com.bluino.esp8266wifirobotcar&hl=en_US&gl=US">Android
        app</a> to control
    the car </h2>

<br>

## Pin Diagram

<table>
    <thead>
        <tr>
            <th style="text-align:center">NodeMCU</th>
            <th style="text-align:center">BTS7960B</th>
            <th style="text-align:center">Details</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td style="text-align:center"><strong>D3</strong> (Optional)</td>
            <td style="text-align:center"><strong>R_IS &amp; L_IS (Both Drivers)</strong></td>
            <td style="text-align:center">Side Current Output (Active Low) </td>
        </tr>
        <tr>
            <td style="text-align:center"><strong>D4</strong> (Required)</td>
            <td style="text-align:center"><strong>R_EN &amp; L_EN (Both Drivers)</strong></td>
            <td style="text-align:center">Rotation Enable Pins (Active High) </td>
        </tr>
        <tr>
            <td style="text-align:center"><strong>D5</strong> (Required)</td>
            <td style="text-align:center"><strong>LPWM (1st BTS7960B)</strong></td>
            <td style="text-align:center">1st BTS7960B Forward Rotation PWM</td>
        </tr>
        <tr>
            <td style="text-align:center"><strong>D6</strong> (Required)</td>
            <td style="text-align:center"><strong>RPWM (1st BTS7960B)</strong></td>
            <td style="text-align:center">1st BTS7960B Reverse Rotation PWM</td>
        </tr>
        <tr>
            <td style="text-align:center"><strong>D7</strong> (Required)</td>
            <td style="text-align:center"><strong>LPWM (2nd BTS7960B)</strong></td>
            <td style="text-align:center">2nd BTS7960B Forward Rotation PWM</td>
        </tr>
        <tr>
            <td style="text-align:center"><strong>D8</strong> (Required)</td>
            <td style="text-align:center"><strong>RPWM (2nd BTS7960B)</strong></td>
            <td style="text-align:center">2nd BTS7960B Reverse Rotation PWM</td>
        </tr>
    </tbody>
</table>