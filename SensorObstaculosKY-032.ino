const int sensorPin = 2;     // the number of the sensor pin
const int ledPin =  13;      // the number of the LED pin
int sensorState;         // variable for reading the sensor status

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(sensorPin, INPUT); 
}

void loop(){

  sensorState = digitalRead(sensorPin);
  digitalWrite(ledPin, !sensorState);  
  delay(500);

}
