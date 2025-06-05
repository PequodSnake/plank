void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorADC = analogRead(A0);
  float voltatge = valorADC * (5.0 / 1023.0);

  Serial.print("Voltatge: ");
  Serial.print(voltatge);
  Serial.println(" V");

  delay(500);
}


