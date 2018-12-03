
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;
const int safetyDistance = 10;

// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Makes the trigPin Output
  pinMode(echoPin, INPUT); // Makes the echoPin Input
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}


void loop() {
  // Clears the trigPin to ensure a clean HIGH pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Gives a HIGH pulse to trigger the PING
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculates the distance
  distance= duration*0.034/2;

//safetyDistance = distance;

  if (distance < safetyDistance){ 
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin, LOW);
  }

  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}
