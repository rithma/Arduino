//SainSmart 1602 keypad shield hello world example code
// include the library code:
#include <LiquidCrystal.h>
 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup() {
// set up the LCD's number of columns and rows:
lcd.begin(16, 2);
// Print a message to the LCD.
lcd.print("Luz,Azul,and Ama");
lcd.setCursor(0,1); // move to the begining of the second line
lcd.print("I Love You!!!");
}
 
void loop() {
// Turn off the display:
//lcd.noDisplay();
delay(500);
//Turn on the display:
lcd.display();
delay(1500);
}
