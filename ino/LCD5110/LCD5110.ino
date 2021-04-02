#include <LCD5110_Basic.h>

LCD5110 a (8,9,10,11,12);

extern uint8_t SmallFont [];
extern uint8_t MediumNumbers [];
extern uint8_t BigNumbers [];

void setup() {
a.InitLCD();
}

void loop() {
a.setFont(SmallFont);
a.print("Zeynep", CENTER,0);
delay(1000);
a.setFont(SmallFont);
a.print("                     ", CENTER,0);
delay(1000);

 a.setFont(SmallFont);
a.print("Sami", CENTER,0);
delay(1000);
a.setFont(SmallFont);
a.print("                     ", CENTER,0);
delay(1000);

a.setFont(SmallFont);
a.print("Hacer", CENTER,0);
delay(1000);
a.setFont(SmallFont);
a.print("                     ", CENTER,0);
delay(1000);

a.setFont(SmallFont);
a.print("Oguz", CENTER,0);
delay(1000);
a.setFont(SmallFont);
a.print("                     ", CENTER,0);
delay(1000);

}
