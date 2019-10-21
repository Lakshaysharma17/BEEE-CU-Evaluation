int distance;
long duration;
void setup()
{
  pinMode(1,OUTPUT);
  pinMode(2,INPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(1,LOW);
  delayMicroseconds(5);
  digitalWrite(1,HIGH);
  delayMicroseconds(10);
  digitalWrite(1,LOW);
  duration=pulseIn(2,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance(cm)");
  Serial.println(distance);
  while(distance<150)
{
  digitalWrite(12,HIGH);
 delay(100);
  digitalWrite(12,LOW);
  delay(100);
}
}