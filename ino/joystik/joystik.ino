int poty ;
int potx ;
void setup() {
pinMode (A0,INPUT);
pinMode (A1,INPUT);
Serial.begin (9600);
}

void loop() {
potx = analogRead (A0);
poty = analogRead (A1);
if ( potx == 1023 ){
  Serial.println ("vites arttirildi");
  delay(500);
}
else {
  Serial.println ("vites bosta");
  delay(500);
}

if (potx == 0){
  Serial.println ("vites azaltildi");
  delay(500);
}
else { 
  Serial.println ("vites bosta");
  delay(500);
}
if (poty == 1023){
  Serial.println ("vites park konumunda");   
  delay (500);                    
}
else {
  Serial.println ("vites bosta");
  delay (500);
}

}
