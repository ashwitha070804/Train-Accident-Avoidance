
void piezo (float p_value, char c)
if (p_value>1.5&&c=='1') {
digitalWrite(5, HIGH);
digitalWrite(4, HIGH);
Firebase.setInt (firebaseData, "/Voltage/hyderabad/volts",p_value);
Serial.print (p_value);
Serial.println("v");
display.setLogBuffer (5, 30);
display.clear();
display.print ("PEIZO: ");
display.println(p_value);
display.println("Volts");
Serial.println("Hyderabad Alert");
display.print ("STOP ");
display.print ("THE ");
display.println("TRAIN ");
display.print ("Hyderabad ");
display.println("Alert");
display.drawLogBuffer (0, 0);
display.display();
delay(1000);
} else {
Serial.println("All areas clear");
display.setLogBuffer (5, 30);
display.clear();
display.println("ALL");
display.println("AREAS");
display.println("CLEAR");
digitalWrite(5, LOW);
digitalWrite(4, LOW);
display.drawLogBuffer (0, 0);
display.display();
delay(1000);
}