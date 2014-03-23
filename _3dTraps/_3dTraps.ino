// uscite cavi 
/*
1 +
2 -
3 solonoide tasto
4 sol trappola
5 servo trappola
6 extra (ard 8)
*/

void setup() 
{ 
  Serial.begin(9600);
  Serial.println("init All");
  initTrappolaServo(3);
  initPulsante(2,4);
  initTrappolaSolenoide(6);
} 

void loop() 
{ 
 checkClick();
 aggiornaTrappolaServo();
 aggiornaTrappolaSolenoide();
} 
