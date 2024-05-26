/*
This program works in STM32 Board! Even tough its just simple LED blink program, its kinda grateful to finally succed upload the code haha! 
note that i use STM32duino to code this, so you might be familiar with the code if u work in arduino IDE.
Date: May 26, 2024
Time: 3:07 PM

For the configuration, just see image "LED_configuration"
*/

void setup() {
  pinMode(PC13, OUTPUT);
}

void loop() {
  digitalWrite(PC13, HIGH); // turn the LED on (HIGH is the voltage level) 
  delay(2000); // wait for 2 seconds 
  digitalWrite(PC13, LOW); // turn the LED off by making the voltage LOW 
  delay(1000); // wait for a second
}
