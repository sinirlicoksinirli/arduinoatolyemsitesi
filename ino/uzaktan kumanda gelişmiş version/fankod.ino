#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

#include <IRremote.h>

int RECV_PIN = 3;
IRrecv irrecv(RECV_PIN);
decode_results results;

#define BUTON0 0xFF6897
#define BUTON1 0xFF30CF
#define VOL1 0xFFE01F
#define VOL2 0xFFA857


int sinyal = 8;
int buzzer = 4;
int motor = 9;

void setup()
{
  pinMode (sinyal,OUTPUT);
  pinMode (buzzer,OUTPUT);
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
}
void loop() {

  if (irrecv.decode(&results))
  {
    if (results.value == BUTON1)
    {
      digitalWrite(motor, !digitalRead(motor));
      if (digitalRead(motor) == HIGH)
      {
        Serial.println("motor calismaya basladi");
      }
      else
      {
        Serial.println("motor calismayi durdurdu");
      }
    }
   
  
     if (results.value == BUTON1)
    {
      digitalWrite(buzzer, !digitalRead(buzzer));
      if (digitalRead(buzzer) == HIGH)
      {digitalWrite (4,HIGH), delay (150), digitalWrite (4,LOW);
        Serial.println("buzzer bipledi");
      }
      else
      {
        Serial.println("buzzer biplemeyi kesti");
      }
     }
       if (results.value == BUTON1)
    {
      digitalWrite(sinyal, !digitalRead(sinyal));
      if (digitalRead(sinyal) == HIGH)
      {digitalWrite (8,HIGH), delay (150), digitalWrite (8,LOW);
        Serial.println("bir sinyal ulasti");
      }
      else
      {
        Serial.println("sinyal yok");
      }
      }
    irrecv.resume();
  }
}
