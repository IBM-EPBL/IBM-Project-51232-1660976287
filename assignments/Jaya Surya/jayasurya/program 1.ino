// C++ code
//
void setup()
{
  pinMode(3, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(A4, INPUT);
}

void loop()
{
  Serial.println(digitalRead(3));
  if (digitalRead(3) == 1) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  Serial.println((-40 + 0.488155 * (analogRead(A4) - 20)));
  if ((-40 + 0.488155 * (analogRead(A4) - 20)) > 60) {
    digitalWrite(13, HIGH);
    tone(13,1000);
    delay(200);
    noTone(13);
    delay(200);
  } else {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}