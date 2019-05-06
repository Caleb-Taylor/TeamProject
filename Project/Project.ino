/*
5.2.19
Designed by Caleb Taylor and Jacob Louden
This program will turn on and turn off 3 LED lights */                    
/*
 */

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}
  



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
  

}
