#define BLYNK_TEMPLATE_ID "TMPL6b7HENQD6"
#define BLYNK_TEMPLATE_NAME "IOT"
#define BLYNK_AUTH_TOKEN "_hYSN8wsCWwUlVvcUdQYskbg_c5aNUSy"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "SMUHERO.LAB";
char pass[] = "Smuhero@LAB";

BLYNK_WRITE(V0) {
  int value = param.asInt();  
  digitalWrite(D1, value);
}

BLYNK_WRITE(V1) {
  int value = param.asInt();  
  digitalWrite(D2, value);
}

BLYNK_WRITE(V2) {
  int value = param.asInt();  
  digitalWrite(D6, value);
}

void setup() {
  Serial.begin(115200);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D6, OUTPUT);
  
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}
