
#define WifiLED 16 // On board Wifi Led Pin             GPIO2(D0)
#define IS 0       // Side Current Output (Active Low)   GPIO0(D3)
#define EN 2       // Enable Pin (Active High)               GPIO2(D4)
#define LPWM_1 14  // L298N pwm1 motors Right             GPIO14(D5)
#define RPWM_1 12  // L298N pwm2 motors Right             GPIO12(D6)
#define LPWM_2 13  // L298N pwm3 motors Left             GPIO13(D7)
#define RPWM_2 15  // L298N pwm4 motors Left             GPIO15(D8)

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

String command;      // String to store app command state.
int speedCar = 1023; // 400 - 1023.
int speed_Coeff = 3;

const char *ssid = "RC_PowerCAR"; // Wifi SSID
const char *psk = "connect_me";     // Wifi Password

ESP8266WebServer server(80);

void setup()
{

  pinMode(LPWM_1, OUTPUT);
  pinMode(RPWM_1, OUTPUT);
  pinMode(LPWM_2, OUTPUT);
  pinMode(RPWM_2, OUTPUT);
  pinMode(WifiLED, OUTPUT);
  pinMode(IS, OUTPUT);
  pinMode(EN, OUTPUT);

  digitalWrite(IS, LOW);
  digitalWrite(WifiLED, LOW); // Turn on the wifi LED

  Serial.begin(115200);

  // Connecting WiFi

  WiFi.mode(WIFI_AP);

  WiFi.softAP(ssid, psk);

  IPAddress myIP = WiFi.softAPIP();

  Serial.print("AP IP address: ");

  Serial.println(myIP);

  // Starting WEB-server

  server.on("/", HTTP_handleRoot);

  server.onNotFound(HTTP_handleRoot);

  server.begin();
}

void goAhead()
{

  analogWrite(RPWM_1, speedCar);
  analogWrite(LPWM_1, 0);

  analogWrite(RPWM_2, speedCar);
  analogWrite(LPWM_2, 0);

  digitalWrite(EN, HIGH);
}

void goBack()
{

  analogWrite(RPWM_1, 0);
  analogWrite(LPWM_1, speedCar);

  analogWrite(RPWM_2, 0);
  analogWrite(LPWM_2, speedCar);

  digitalWrite(EN, HIGH);
}

void goRight()
{

  analogWrite(RPWM_1, 0);
  analogWrite(LPWM_1, speedCar);

  analogWrite(RPWM_2, speedCar);
  analogWrite(LPWM_2, 0);

  digitalWrite(EN, HIGH);
}

void goLeft()
{

  analogWrite(RPWM_1, speedCar);
  analogWrite(LPWM_1, 0);

  analogWrite(RPWM_2, 0);
  analogWrite(LPWM_2, speedCar);

  digitalWrite(EN, HIGH);
}

void goAheadRight()
{
  analogWrite(RPWM_1, speedCar / speed_Coeff);
  analogWrite(LPWM_1, 0);

  analogWrite(RPWM_2, speedCar);
  analogWrite(LPWM_2, 0);

  digitalWrite(EN, HIGH);
}

void goAheadLeft()
{
  analogWrite(RPWM_1, speedCar);
  analogWrite(LPWM_1, 0);

  analogWrite(RPWM_2, speedCar / speed_Coeff);
  analogWrite(LPWM_2, 0);

  digitalWrite(EN, HIGH);
}

void goBackRight()
{
  analogWrite(RPWM_1, 0);
  analogWrite(LPWM_1, speedCar / speed_Coeff);

  analogWrite(RPWM_2, 0);
  analogWrite(LPWM_2, speedCar);

  digitalWrite(EN, HIGH);
}

void goBackLeft()
{
  analogWrite(RPWM_1, 0);
  analogWrite(LPWM_1, speedCar);

  analogWrite(RPWM_2, 0);
  analogWrite(LPWM_2, speedCar / speed_Coeff);

  digitalWrite(EN, HIGH);
}

void stopRobot()
{

  digitalWrite(EN, LOW);
}

void loop()
{

  server.handleClient();

  command = server.arg("State");

  if (command == "F")
    goAhead();

  else if (command == "B")
    goBack();

  else if (command == "L")
    goLeft();

  else if (command == "R")
    goRight();

  else if (command == "I")
    goAheadRight();

  else if (command == "G")
    goAheadLeft();

  else if (command == "J")
    goBackRight();

  else if (command == "H")
    goBackLeft();

  else if (command == "0")
    speedCar = 400;

  else if (command == "1")
    speedCar = 470;

  else if (command == "2")
    speedCar = 540;

  else if (command == "3")
    speedCar = 610;

  else if (command == "4")
    speedCar = 680;

  else if (command == "5")
    speedCar = 750;

  else if (command == "6")
    speedCar = 820;

  else if (command == "7")
    speedCar = 890;

  else if (command == "8")
    speedCar = 960;

  else if (command == "9")
    speedCar = 1023;

  else if (command == "S")
    stopRobot();
}

void HTTP_handleRoot(void)
{

  if (server.hasArg("State"))
  {

    Serial.println(server.arg("State"));
  }

  server.send(200, "text/html", "");

  delay(1);
}
