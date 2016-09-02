// CODE sensoren
// Deze code is de aparte code voor de sensoren die wij apart op een ander arduino board laten werken.

// hier uitleg welke pin welke naam heeft.
int Trigger1 = 13;
int Echo1 = 12;

int Trigger2 = 11;
int Echo2 = 10;

int Trigger3 = 9;
int Echo3 = 8;

int Trigger4 = 7;
int Echo4 = 6;

//dit zijn de pinnen voor het signaal naar het volgende board.
int pin5 = 5;
int pin4 = 4;
int pin3 = 3;
int pin2 = 2;



void setup() {
// wat de pin doet.
pinMode(Trigger1, OUTPUT);
pinMode(Echo1, INPUT);

pinMode(Trigger2, OUTPUT);
pinMode(Echo2, INPUT);

pinMode(Trigger3, OUTPUT);
pinMode(Echo3, INPUT);

pinMode(Trigger4, OUTPUT);
pinMode(Echo4, INPUT);

pinMode(pin5, OUTPUT);
pinMode(pin4, OUTPUT);
pinMode(pin3, OUTPUT);
pinMode(pin2, OUTPUT);

}

void sensor1(){ //functie eerste sensor
  int duration1, distance1;
  digitalWrite (Trigger1, HIGH);
  delayMicroseconds (10);
  digitalWrite (Trigger1, LOW);
  duration1 = pulseIn (Echo1, HIGH);
  distance1 = (duration1/2)/29.1;

  if (distance1 < 30) { 
    digitalWrite (pin5, HIGH);
  } else {
    digitalWrite (pin5, LOW);
  }  
}

void sensor2(){ //functie tweede sensor
    int duration2, distance2;
  digitalWrite (Trigger2, HIGH);
  delayMicroseconds (10);
  digitalWrite (Trigger2, LOW);
  duration2 = pulseIn (Echo2, HIGH);
  distance2 = (duration2/2)/29.1;

  if (distance2 < 30) { 
    digitalWrite (pin4, HIGH);
  } else {
    digitalWrite (pin4, LOW);
  }  
}

void sensor3(){ //functie tweede sensor
    int duration3, distance3;
  digitalWrite (Trigger3, HIGH);
  delayMicroseconds (10);
  digitalWrite (Trigger3, LOW);
  duration3 = pulseIn (Echo3, HIGH);
  distance3 = (duration3/2)/29.1;

  if (distance3 < 30) { 
    digitalWrite (pin3, HIGH);
  } else {
    digitalWrite (pin3, LOW);
  }  
}

void sensor4(){ //functie tweede sensor
    int duration4, distance4;
  digitalWrite (Trigger4, HIGH);
  delayMicroseconds (10);
  digitalWrite (Trigger4, LOW);
  duration4 = pulseIn (Echo4, HIGH);
  distance4 = (duration4/2)/29.1;

  if (distance4 < 30) { 
    digitalWrite (pin2, HIGH);
  } else {
    digitalWrite (pin2, LOW);
  }  
}

void loop() {
  sensor1();
  sensor2();
  sensor3();
  sensor4();
  delayMicroseconds(10);

}
