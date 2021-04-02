int b1;
int b2;
int b3;

void setup() {
pinMode (A0,INPUT);
pinMode (A1,INPUT);
pinMode (A2,INPUT);
}

void loop() {
b1 = analogRead (A0);
b2 = analogRead (A1);
b3 = analogRead (A2);

if (b1 == 1023){
  digitalWrite (4,HIGH);
  digitalWrite (5,LOW);
  delay(100);
}
else {
  digitalWrite (4,LOW);
  digitalWrite (5,HIGH);
  delay(100);
}
if (b2 == 1023){
  digitalWrite (5,LOW);
  digitalWrite (3,HIGH);
  delay(100);
}
else {
  digitalWrite (5,HIGH);
  digitalWrite (3,LOW);
  delay(100);
}
if (b3 == 1023){
  digitalWrite (5,LOW);
  digitalWrite (2,HIGH);
  delay (100);
}
else {
  digitalWrite (5,HIGH);
  digitalWrite (2,LOW);
  delay (100);
}
}
