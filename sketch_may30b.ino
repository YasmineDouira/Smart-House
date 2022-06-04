int led_vert=8;
int led_rouge=7;
int alarme=6;
int gaz=A0;// C++ code
//
void setup()
{
  pinMode(led_rouge, OUTPUT);
  pinMode(led_vert, OUTPUT);
  pinMode(alarme, OUTPUT);
  pinMode(gaz, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(gaz)>=200) {
    tone(alarme,1200);
    digitalWrite(led_vert, LOW);
    digitalWrite(led_rouge, HIGH); }
  else {
noTone(alarme);
    digitalWrite(led_vert, HIGH);
    digitalWrite(led_rouge, LOW); }
}
