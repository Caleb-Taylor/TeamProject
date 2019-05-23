  /*
5.2.19
Designed by Caleb Taylor and Jacob Louden
<<<<<<< HEAD
This program will turn on an LED light when  */                   

 
||||||| merged common ancestors
This program will turn on and turn off 3 LED lights */                   

 */
=======
This program will turn on and turn off 3 LED lights */                    
/*
 */
>>>>>>> 02e0a9d741e5e684739f2b7c59d2a05fbcfbc385


// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;
 
// defines variables
long duration;
int distance;
int safetyDistance;
 
 
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
<<<<<<< HEAD
 
 
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
 
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
 
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
 
// Calculating the distance
distance= duration*0.034/2;
 
safetyDistance = distance;
if (safetyDistance <= 5){
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
}
else{
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
||||||| merged common ancestors
  



void loop() {      
  digitalWrite(LED1, HIGH);   //turn on LED1
  delay(200);                 //wait for 200ma   
  digitalWrite(LED2, HIGH);   //turn on LED2
  delay(200);                 //wait for 200ma
  digitalWrite(LED3, HIGH);   //turn on LED3
  delay(200);                 //wait for 200ma
  digitalWrite(LED1, LOW);    //turn off LED1
  delay(300);                 //wait for 300ma
  digitalWrite(LED2, LOW);    //turn off LED2
  delay(300);                 //wait for 300ma
  digitalWrite(LED3, LOW);    //turn off LED3
  delay(300);                 //wait for 300ma before running program all over again
  

=======
  



void loop() {      
  digitalWrite(LED1, HIGH);   //turn on LED1
  delay(50);                 //wait for 200ma   
  digitalWrite(LED2, HIGH);   //turn on LED2
  delay(50);                 //wait for 200ma
  digitalWrite(LED3, HIGH);   //turn on LED3
  delay(50);                 //wait for 200ma
  digitalWrite(LED1, LOW);    //turn off LED1
  digitalWrite(LED2, LOW);    //turn off LED2
  delay(50);                 //wait for 300ma
  delay(50);                 //wait for 300ma
  digitalWrite(LED3, LOW);    //turn off LED3
  delay(50);                 //wait for 300ma before running program all over again
  

>>>>>>> 02e0a9d741e5e684739f2b7c59d2a05fbcfbc385
}
 
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
} 
