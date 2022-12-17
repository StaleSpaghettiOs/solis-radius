#include <Arduino.h>
//Compatibility for ESP32 and ESP8266 chips
#ifdef ESP32 
  #include <WiFi.h>
  #include <AsyncTCP.h>
#else
  #include <ESP8266WiFi.h>



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
