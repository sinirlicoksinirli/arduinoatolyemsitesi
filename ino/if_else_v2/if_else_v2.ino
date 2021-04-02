int b = 0;
int bekleme = 50;
void setup() {
pinMode (2,INPUT);

}

void loop() {
b = digitalRead (2);

if(b == 1) {
  digitalWrite (3,HIGH);
delay (bekleme);
digitalWrite (3,LOW);
delay (bekleme); 

digitalWrite (4,HIGH);
delay (bekleme);
digitalWrite (4,LOW);
delay (bekleme); 

digitalWrite (5,HIGH);
delay (bekleme);
digitalWrite (5,LOW);
delay (bekleme); 

digitalWrite (6,HIGH);
delay (bekleme);
digitalWrite (6,LOW);
delay (bekleme); 

digitalWrite (7,HIGH);
delay (bekleme);
digitalWrite (7,LOW);
delay (bekleme); 

digitalWrite (8,HIGH);
delay (bekleme);
digitalWrite (8,LOW);
delay (bekleme); 

digitalWrite (9,HIGH);
delay (bekleme);
digitalWrite (9,LOW);
delay (bekleme); 

digitalWrite (10,HIGH);
delay (bekleme);
digitalWrite (10,LOW);
delay (bekleme); 

digitalWrite (11,HIGH);
delay (bekleme);
digitalWrite (11,LOW);
delay (bekleme); 

digitalWrite (12,HIGH);
delay (bekleme);
digitalWrite (12,LOW);
delay (bekleme); 





 


digitalWrite (12,HIGH);
delay (bekleme);
digitalWrite (12,LOW);
delay (bekleme); 

digitalWrite (11,HIGH);
delay (bekleme);
digitalWrite (11,LOW);
delay (bekleme); 

digitalWrite (10,HIGH);
delay (bekleme);
digitalWrite (10,LOW);
delay (bekleme); 

digitalWrite (9,HIGH);
delay (bekleme);
digitalWrite (9,LOW);
delay (bekleme); 

digitalWrite (8,HIGH);
delay (bekleme);
digitalWrite (8,LOW);
delay (bekleme); 

digitalWrite (7,HIGH);
delay (bekleme);
digitalWrite (7,LOW);
delay (bekleme); 

digitalWrite (6,HIGH);
delay (bekleme);
digitalWrite (6,LOW);
delay (bekleme); 


digitalWrite (5,HIGH);
delay (bekleme);
digitalWrite (5,LOW);
delay (bekleme); 

digitalWrite (4,HIGH);
delay (bekleme);
digitalWrite (4,LOW);
delay (bekleme); 

digitalWrite (3,HIGH);
delay (bekleme);
digitalWrite (3,LOW);
delay (bekleme);  
}
else {
  digitalWrite (3,HIGH);
  delay (bekleme);
  digitalWrite (3,LOW);
  delay (bekleme);
}
}
