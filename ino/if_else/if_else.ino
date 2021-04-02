int b = 0;
void setup() {
pinMode (7,INPUT);


}

void loop() {
b = digitalRead (7);
if (b == 1) {
  digitalWrite (3,HIGH);
  delay (100);
  digitalWrite (3,LOW);

  digitalWrite (4,HIGH);
  delay (100);
  digitalWrite (4,LOW);

  digitalWrite (5,HIGH);
  delay (100);
  digitalWrite (5,LOW);

  digitalWrite (6,HIGH);
  delay (100);
  digitalWrite (6,LOW);
}
else{
  digitalWrite (3,HIGH);
  delay (100);
  digitalWrite (3,LOW);
  delay (100);
}
}
