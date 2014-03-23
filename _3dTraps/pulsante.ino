
int pinPulsante;
int pinSolenoide;

void initPulsante(int inPin, int outPin){
  pinPulsante = inPin;
  pinSolenoide = outPin;
  pinMode(pinSolenoide, OUTPUT);
  pinMode(pinPulsante, INPUT_PULLUP);
}

void checkClick(){
  int buttonState = digitalRead(pinPulsante);
  digitalWrite(pinSolenoide,!buttonState);
}
