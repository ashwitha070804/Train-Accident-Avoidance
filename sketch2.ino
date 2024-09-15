void setup() {
  // put your setup code here, to run once:

  display.init();
  display.setContrast(255);
  pinMode(5, OUTPUT); // D5
  pinMode(4, OUTPUT); // D4
  pinMode(34, INPUT); // D34

  Serial.begin(115200);
  Serial.print("Connecting to ");
  Serial.print(ssid);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("");
  Serial.println("Connected");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}
