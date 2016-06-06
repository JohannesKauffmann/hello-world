int echoPin = 13; //echo
int trigPin = 12; //trigger
int pin1 = 11;
int duration, distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pin1, OUTPUT);
}

void loop()
{
  //het volgende zend een pulse naar de trigpin en zet deze daarna weer low
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //definieer een variabele genaamd duration: dit is hoelang de echo erover doet om een signaal terug te sturen (om op HIGH te gaan staan)
  duration = pulseIn(echoPin, HIGH);

}
