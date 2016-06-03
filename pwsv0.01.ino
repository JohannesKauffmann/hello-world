int echoPin1 = 13;                       // change the name of a pin.
int echoPin2 = 11;
int echoPin3 = 9;
int echoPin4 = 7;
int trigPin1 = 12;
int trigPin2 = 10;
int trigPin3 = 8;
int trigPin4 = 6;
int pin1 = 5;
int pin2 = 4;
int pin3 = 3;
int pin4 = 2;

void setup() {                           // tells which pin is an output or an input.
 pinMode(trigPin1, OUTPUT);
 pinMode(trigPin2, OUTPUT);
 pinMode(trigPin3, OUTPUT);
 pinMode(trigPin4, OUTPUT);
 pinMode(echoPin1, INPUT);
 pinMode(echoPin2, INPUT);
 pinMode(echoPin3, INPUT);
 pinMode(echoPin4, INPUT); 
 pinMode(pin1, OUTPUT);
 pinMode(pin2, OUTPUT);
 pinMode(pin3, OUTPUT);
 pinMode(pin4, OUTPUT);
  
}

void loop() {
  digitalWrite (trigPin1, LOW);              // makes sure that the trigger is of when the loop starts over.
  digitalWrite (trigPin2, LOW);              // makes sure that the trigger is of when the loop starts over.
  digitalWrite (trigPin3, LOW);              // makes sure that the trigger is of when the loop starts over.
  digitalWrite (trigPin4, LOW);              // makes sure that the trigger is of when the loop starts over.
  delayMicroseconds(2);                      // makes the system not crashes.
  digitalWrite (trigPin1, HIGH);             // make sure that the trigger gives an sound.
  digitalWrite (trigPin2, HIGH);             // make sure that the trigger gives an sound.
  digitalWrite (trigPin3, HIGH);             // make sure that the trigger gives an sound.
  digitalWrite (trigPin4, HIGH);             // make sure that the trigger gives an sound.
  delayMicroseconds(10);                     // time where the echo can read a signal.
  digitalWrite (trigPin1, LOW);              // no longer sends a signal.
  digitalWrite (trigPin2, LOW);              // no longer sends a signal.
  digitalWrite (trigPin3, LOW);              // no longer sends a signal.
  digitalWrite (trigPin4, LOW);              // no longer sends a signal.
  int duration1 = pulseIn(echoPin1, HIGH);   // meassures the time until an echo.
  int duration2 = pulseIn(echoPin2, HIGH);   // meassures the time until an echo.
  int duration3 = pulseIn(echoPin3, HIGH);   // meassures the time until an echo.
  int duration4 = pulseIn(echoPin4, HIGH);   // meassures the time until an echo.
  int distance1 = (duration1/2) / 29.1;      // calculate the time to distance till the sensor.
  int distance2 = (duration2/2) / 29.1;      // calculate the time to distance till the sensor.
  int distance3 = (duration3/2) / 29.1;      // calculate the time to distance till the sensor.
  int distance4 = (duration4/2) / 29.1;      // calculate the time to distance till the sensor.
  if (distance1 < 8){                        // when in a special range of the sensor, this will make the pin high.
    digitalWrite(pin1, HIGH);
  }
  else {
    digitalWrite(pin1, LOW);
  }
    if (distance2 < 8){                      // when in a special range of the sensor, this will make the pin high.
    digitalWrite(pin2, HIGH);
  }
  else {
    digitalWrite(pin2, LOW);
  }
    if (distance3 < 8){                      // when in a special range of the sensor, this will make the pin high.
    digitalWrite(pin3, HIGH);
  }
  else {
    digitalWrite(pin3, LOW);
  }
    if (distance4 < 8){                      // when in a special range of the sensor, this will make the pin high.
    digitalWrite(pin4, HIGH);
  }
  else {
    digitalWrite(pin4, LOW);
  }
}
    
  

