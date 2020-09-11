int microphone = A3
int sonido=0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
sonido = analogRead(microphone);
Serial.printIn(val);
}
