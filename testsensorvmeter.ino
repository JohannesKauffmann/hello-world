//simpele code om te kijken of de HC-SR04 sensor werkt, door een ledlampje aan te sluiten
//en deze te laten branden wanneer de sensor activiteit ontdekt binnen zijn ingsteld bereik

int echoPin = 13;        //echo
int trigPin = 12;        //trigger

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  //het volgende zend een pulse naar de trigpin en zet deze daarna weer low
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  //onderstaande meet de tijd die de sensor erover doet om een signaal terug te sturen, en zet dat vervolgens om in een afstand
  int duration, distance;
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
}
