int microfono=0;
int sonido=0;
void setup()

{
   pinMode(6,OUTPUT); // pin de salida A6
   pinMode(0,INPUT); // pin de entrada A0
Serial.begin(9600);
  
}

void loop()
{
sonido = analogRead(microfono); //señal que entra por el micrófono
analogWrite(microfono, sonido / 4); // señal de salida, la entrada está entre 0 y 1023 la salida puede llegar hasta 255 por eso divido para 4
}
