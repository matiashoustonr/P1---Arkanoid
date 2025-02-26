#include <Wire.h>
#include <Wire.h>
#include "Adafruit_GFX.h"
#include <Adafruit_SSD1306.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(2000);
  display.clearDisplay();
  display.display();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Hello, world!");
  display.display();
  delay(2000);
  display.clearDisplay();
  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:
}   efee      
egewrg