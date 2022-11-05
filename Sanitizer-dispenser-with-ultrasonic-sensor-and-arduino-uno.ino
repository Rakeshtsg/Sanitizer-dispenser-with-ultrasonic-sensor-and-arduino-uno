//Sanitizer-dispenser-with-ultrasonic-sensor-and-arduino-uno
//Using a Arduino Nano|ultrasonic-sensor
//This is unlikely to be of much use in a practical applications
//ID OF USER: Rakeshtsg
//INTERFACE: Arduino 
//You need to install the required libraries before uploading the code.


#include<Servo.h>
#define echoPin 4
#define trigPin 5
Servo Myservo;

int long duration;
int distance;
void setup(){ 
Myservo.attach(3);
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);

}

void loop()
{
digitalWrite(trigPin,LOW);
delayMicroseconds(2); 
digitalWrite(trigPin,HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration*0.034/2);
  
  if(distance<=5){
Myservo.write(180);
}
else {
Myservo.write(0);


}
  delay(500);

}
