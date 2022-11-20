const int lowestPin = 2;
const int highestPin = 13;
const int delayTime = 55;

void setup()
{
  for(int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
     pinMode(thisPin,OUTPUT);
  }
} 

void loop()
{
  for(int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    digitalWrite(thisPin,HIGH);
    delay(delayTime);
  }

  for(int thisPin = lowestPin;thisPin <= highestPin;thisPin++)
  {
    digitalWrite(thisPin,LOW);
  }
}
