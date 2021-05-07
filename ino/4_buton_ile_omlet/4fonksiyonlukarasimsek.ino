int but1 = A0 ;
int but2 = A1 ;
int but3 = A2 ;
int but4 = A3 ;
int but1dur;
int but2dur;
int but3dur;
int but4dur;
void setup() {


}

void loop() {
  but1dur = digitalRead(but1);
if (but1dur == HIGH){
  digitalWrite (2,HIGH);
  digitalWrite (3,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (8,HIGH);
  digitalWrite (9,HIGH);
  digitalWrite (10,HIGH);
  digitalWrite (11,HIGH);
}
else {
  digitalWrite (2,LOW);
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  digitalWrite (9,LOW);
  digitalWrite (10,LOW);
  digitalWrite (11,LOW);
}
 but2dur = digitalRead(but2);
if (but2dur == HIGH){
  digitalWrite (2,HIGH);
  digitalWrite (3,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (8,HIGH);
  digitalWrite (9,HIGH);
  digitalWrite (10,HIGH);
  digitalWrite (11,HIGH);
  delay (100);
  digitalWrite (2,LOW);
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  digitalWrite (9,LOW);
  digitalWrite (10,LOW);
  digitalWrite (11,LOW);
 delay (100);
}
else {
   digitalWrite (2,LOW);
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  digitalWrite (9,LOW);
  digitalWrite (10,LOW);
  digitalWrite (11,LOW);
}
but3dur = digitalRead (but3);
if (but3dur == HIGH){
  digitalWrite (2,HIGH);
  delay (100);
  digitalWrite (3,HIGH);
  delay (100);
  digitalWrite (4,HIGH);
  delay (100);
  digitalWrite (5,HIGH);
  delay (100);
  digitalWrite (6,HIGH);
  delay (100);
  digitalWrite (7,HIGH);
  delay (100);
  digitalWrite (8,HIGH);
  delay (100);
  digitalWrite (9,HIGH);
  delay (100);
  digitalWrite (10,HIGH);
  delay (100);
  digitalWrite (11,HIGH);
  delay (100);
}
else {
   digitalWrite (2,LOW);
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  digitalWrite (9,LOW);
  digitalWrite (10,LOW);
  digitalWrite (11,LOW);
}
but4dur = digitalRead (but4);
if (but4dur == HIGH){
   digitalWrite (2,HIGH);
  delay (100);
  digitalWrite (3,HIGH);
  delay (100);
  digitalWrite (4,HIGH);
  delay (100);
  digitalWrite (5,HIGH);
  delay (100);
  digitalWrite (6,HIGH);
  delay (100);
  digitalWrite (7,HIGH);
  delay (100);
  digitalWrite (8,HIGH);
  delay (100);
  digitalWrite (9,HIGH);
  delay (100);
  digitalWrite (10,HIGH);
  delay (100);
  digitalWrite (11,HIGH);
  delay (100);
  digitalWrite (2,LOW);
  delay (100);
  digitalWrite (3,LOW);
  delay (100);
  digitalWrite (4,LOW);
  delay (100);
  digitalWrite (5,LOW);
  delay (100);
  digitalWrite (6,LOW);
  delay (100);
  digitalWrite (7,LOW);
  delay (100);
  digitalWrite (8,LOW);
  delay (100);
  digitalWrite (9,LOW);
  delay (100);
  digitalWrite (10,LOW);
  delay (100);
  digitalWrite (11,LOW);
  delay (100);
  digitalWrite (11,HIGH);
  delay (100);
  digitalWrite (10,HIGH);
  delay (100);
  digitalWrite (9,HIGH);
  delay (100);
  digitalWrite (8,HIGH);
  delay (100);
  digitalWrite (7,HIGH);
  delay (100);
  digitalWrite (6,HIGH);
  delay (100);
  digitalWrite (5,HIGH);
  delay (100);
  digitalWrite (4,HIGH);
  delay (100);
  digitalWrite (3,HIGH);
  delay (100);
  digitalWrite (2,HIGH);
  delay (100);
}
else {
   digitalWrite (2,LOW);
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  digitalWrite (9,LOW);
  digitalWrite (10,LOW);
  digitalWrite (11,LOW);
}
}
