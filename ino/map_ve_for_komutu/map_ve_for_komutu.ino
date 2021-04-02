int pothiz ;
int w;
int a;
void setup() {
pinMode (A0,INPUT);
}

void loop() {
 pothiz = analogRead (A0) ; 
 for (int a =2; a<14; a++) {
  digitalWrite (a,HIGH);
  delay (pothiz);
  digitalWrite (a,LOW);
  delay (pothiz);
 }
 for (int w =13; w>-2; w--) {
  digitalWrite (w,HIGH);
  delay (pothiz);
  digitalWrite (w,LOW);
  delay (pothiz);
 }
}
