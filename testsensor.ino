//simpele code om te kijken of de HC-SR04 sensor werkt, door een ledlampje aan te sluiten
//en deze te laten branden wanneer de sensor activiteit ontdekt binnen zijn ingsteld bereik

int echoPin = 13;        //echo
int trigPin = 12;        //trigger
int ledPin1 = 8;            //brandt wanneer de sensor activiteit registreerd
int ledPin2 = 7;            //brandt wanneer de sensor geen activiteit registreerd  
int duration, distance;  //definieer de variabeles duration en distance: de tijd die sensor erover doet om een echo terug te zenden en welke afstand daarbij hoort

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
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
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance < 4) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }
  else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
}
