int b ;
void setup() {
pinMode (2,INPUT);
Serial.begin (9600);
}

void loop() {
b = digitalRead (2);
if (b == HIGH){
  Serial.println ("Merhaba");
}
else {
  Serial.println (" ");
}
}
