const int buzzer = 9;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  
  tone(buzzer, 500); // send 500hz sound signal to buzzer
  delay(1000); // Wait for 1000 millisecond(s)
  noTone(buzzer);
  delay(1000); // Wait for 1000 millisecond(s)

  tone(buzzer, 1000); // send 1khz sound signal to buzzer
  delay(1000); // Wait for 1000 millisecond(s)
  noTone(buzzer);
  delay(1000); // Wait for 1000 millisecond(s)

  tone(buzzer, 1500); // send 1.5khz sound signal to buzzer
  delay(1000); // Wait for 1000 millisecond(s)
  noTone(buzzer);
  delay(1000); // Wait for 1000 millisecond(s)
}
