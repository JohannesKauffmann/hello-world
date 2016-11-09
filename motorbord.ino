#include <Servo.h>

// motor 1
int enA = 11; //pin voor de snelheidscontrole
int in1 = 13; //pins voor voor- en achteruit
int in2 = 12;
//motor 2
int enB = 6;
int in3 = 8;
int in4 = 7;

//dit zijn de pins die aangeven of de sensoren iets hebben geregistreerd
int sensor1 = 5;
int sensor2 = 4;
int sensor3 = 3;
int sensor4 = 2;

Servo myservo; //maakt een servo-object om de servo mee te besturen

int pos = 0; //een variabele om de positie van de servo in te bewaren

void setup() {
  //de pins die naar de H-bridge gaan zijn allemaal outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  //de pins van het sensorbord zijn allemaal inputs
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);

  //maakt de servo op het servo-object vast aan pin 9
  myservo.attach(9);

}

void straight(){
//hier moet eerst nog in gezet worden dat de servo naar de 0 positie moet!
      // motor A gaat aan
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
  // maakt de snelheid van de motor 200 deze komt uit de range van 0-255
analogWrite(enA, 200);
  // turn on motor B
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
  // maakt de snelheid van de motor 200 deze komt uit de range van 0-255
analogWrite(enB, 200);
delay(20);
}

void left(){
//hier moet je eerst nog neerzetten dat de servo draait naar de linker kant en hierdoor de bocht van het object weg maakt.
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
  // maakt de snelheid van de motor 100 deze komt uit de range van 0-255
analogWrite(enA, 100);
  // turn on motor B
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
  // maakt de snelheid van de motor 100 deze komt uit de range van 0-255
analogWrite(enB, 100);
//hier komt de tijd dat de auto nodig heeft om een 90 graden hoek te draaien.
}

void right(){
//hier moet je eerst nog neerzetten dat de servo draait naar de rechter kant en hierdoor de bocht van het object weg maakt.
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
  // maakt de snelheid van de motor 100 deze komt uit de range van 0-255
analogWrite(enA, 100);
  // turn on motor B
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
  // maakt de snelheid van de motor 100 deze komt uit de range van 0-255
analogWrite(enB, 100);
//hier komt de tijd dat de auto nodig heeft om een 90 graden hoek te draaien.
}

void achteruit(){
// hier moet eerst de code komen om tegen te gaan dat hij in een hoek rijdt of in een muur recht voor zich.
//hier de code voor het rijden
//hier de code voor de tijd dat hij daar over doet.
}


void loop() {
  val1 = digitalRead(sensor1);
if (val1 == HIGH) {
  
}
  val2 = digitalRead(sensor2);
if (val2 == HIGH) {
  
}
  val3 = digitalRead(sensor3);
if (val3 == HIGH) {
  
}
  val4 = digitalRead(sensor4);
if (val4 == HIGH) {
  
}

