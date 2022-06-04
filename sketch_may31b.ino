
int led=8;
int mouvement=4;
int photoresistor=A0;


void setup()
{
  pinMode(led, OUTPUT);
  pinMode(mouvement, INPUT);
  pinMode(photoresistor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(photoresistor);
  if (analogRead(photoresistor) <=15)
  { 
    if (digitalRead (mouvement)==1)
    {digitalWrite(led, HIGH);
     delay(1000);}
    else
    {digitalWrite(led, LOW);
     delay(1000);}
  }
  else
  {
     {digitalWrite(led, LOW);
       delay(1000);}
  }}
