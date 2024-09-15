
void loop() {
// put your main code here, to run repeatedly:
float p_value1-analogRead (34); p_valuel (p_value1*3.3)/4096;
if (p_value1>1.5){
piezo (p_value1, '1'); delay(1000);
}
}
else{
}
Serial.println("All areas clear");
display.setLogBuffer (5, 30);
display.clear();
display.println("ALL");
display.println("AREAS");
display.println("CLEAR");
digitalWrite(5, LOW);
digitalWrite(4, LOW);
display.drawLogBuffer(0, 0);
display.display();
delay(1000);
Firebase.setInt (firebaseData, "/Voltage/hyderabad/volts", p_value1);