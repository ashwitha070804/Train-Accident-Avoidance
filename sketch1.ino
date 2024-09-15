#include <FirebaseESP32.h>
#include <Wire.h>
#include <WiFi.h>

const char* ssid = "dlink";
const char* password = "Dlink@1208";

#include "SH1106.h"
SH1106 display(0x3C, SDA, SCL); // SCK=D22, SDA=D21

#define FIREBASE_HOST "temp-app-1b77a-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "LrP5Sxg1CXsQ3VVRZmryqjht3a4X8bmMddywyV6b"

FirebaseData firebaseData;
