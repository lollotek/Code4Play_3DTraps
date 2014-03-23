#include <Servo.h> 

Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 

long nextStep = 0;
int pinServo;
int pos = 0; 
int currentPosition = 0;
boolean vaiAvanti = true;
boolean inPausa = false;

void initTrappolaServo(int pin){
  pinServo = pin;
  myservo.attach(pinServo);  // attaches the servo on pin 9 to the servo object 
  Serial.println("init Servo");
} 
 

void aggiornaTrappolaServo(){
  unsigned long currentMillis = millis();
  
  if(currentMillis > nextStep) {
    
    if ( vaiAvanti){
      myservo.write(pos);
      pos += 1;
      nextStep = currentMillis +1;
    }
    
    if ( !vaiAvanti){
      myservo.write(pos);
      pos -= 1;
      nextStep = currentMillis +15;
    }

    
    if ((pos > 180) || (pos < 1)){
      vaiAvanti = !vaiAvanti;
      nextStep = currentMillis +800;
    }
    
  }
}
