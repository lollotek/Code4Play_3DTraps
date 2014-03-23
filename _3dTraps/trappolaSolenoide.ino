
long nextSolenoide = 0 ;
int pinSolenoideTrappola;
int attiva = LOW;

void initTrappolaSolenoide(int pin){
  pinSolenoideTrappola = pin;
  pinMode(pinSolenoideTrappola, OUTPUT);
}

void aggiornaTrappolaSolenoide(){

  unsigned long currentMillis = millis();    
  if(currentMillis > nextSolenoide){
    digitalWrite(pinSolenoideTrappola,attiva);
    Serial.print("attiva");
    Serial.println(attiva);
    if (attiva == HIGH){
      nextSolenoide = currentMillis +400;
      attiva = LOW;
    }else{
      nextSolenoide = currentMillis +1500;
      attiva = HIGH;
    }
  }
  
}
