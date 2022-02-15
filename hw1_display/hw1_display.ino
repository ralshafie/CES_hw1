// New background colour
#define TFT_BROWN 0x38E0

// Pause in milliseconds between screens, change to 0 to time font rendering
#define WAIT 1000

#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h
TFT_eSprite stext = TFT_eSprite(&tft); // Sprite object stext1

unsigned long targetTime = 0; // Used for testing draw times
int tcount = 0;

void setup(void) {
  tft.init();
  tft.setRotation(2);
  
}

void loop() {
  targetTime = millis();
  
  //First we test them with a background colour set
  tft.setTextSize(2.5);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.drawString("TONGIHT", 15, 10, 2);
  delay(WAIT);
  
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.drawString("the music ", 13, 16, 2);
  delay(WAIT);
  tft.drawString("seems so", 15, 48, 2);
  delay(WAIT);


  tft.fillScreen(TFT_BLUE);
  tft.setTextColor(TFT_BLACK);
 tft.setTextSize(2);
  tft.drawString(" LOUD", 25, 48, 2);
  delay(WAIT);
 // int xpos = 0;
  //xpos += tft.drawString("xyz{|}~", 0, 64, 2);
  //tft.drawChar(127, xpos, 64, 2);
  //delay(WAIT);

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);

   tft.setTextSize(2.5);
  tft.drawString(" I wish ", 10, 10, 2);
  tft.drawString(" that we ", 10, 36, 2);
  tft.drawString("could  ", 22, 65,2);
  tft.drawString(" lose ", 10, 90,2);
  tft.setTextSize(2);
  tft.drawString("this ", 22, 120,2);

  tft.setTextSize(1.9);
  tft.drawString("crowd ", 22, 160, 1.9);
  delay(WAIT);
  delay(WAIT);
  delay(WAIT);

  tft.setTextSize(2.5);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.drawString("MAYBE", 25, 78, 2);
  delay(WAIT);
  
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLACK, TFT_GREEN);
  tft.drawString("its better", 10, 104, 2); // italics?
  delay(WAIT);
  tft.drawString("this way", 18, 115, 2);
  delay(WAIT);

 tft.fillScreen(TFT_BLACK);
 tft.setTextColor(TFT_BLUE, TFT_BLACK);
 tft.drawString("We'd hurt ", 10, 26, 2);
 delay(WAIT);
 tft.drawString("each other", 7, 26, 2);
delay(WAIT);
 tft.drawString("with the   ", 10, 26, 2.1);
 delay(WAIT);
 tft.drawString("things we  ", 8, 26, 2);
 delay(WAIT);
 tft.drawString("want to   ", 10, 26, 2.1);
 delay(WAIT);

 tft.fillScreen(TFT_GREEN);
 tft.setTextColor(TFT_BLACK, TFT_GREEN);
 tft.drawString("SAY", 20, 52, 4);
 delay(WAIT);
 
 

 tft.fillScreen(TFT_BLACK);
 tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.drawString("We could ", 13, 16, 2);
  delay(WAIT);
  tft.drawString("have been", 11, 48, 2);
  delay(WAIT);
  tft.drawString("so good", 15, 80, 2);
  delay(WAIT);
  tft.drawString("TOGETHER", 6, 110, 2);
  delay(WAIT);


   tft.fillScreen(TFT_BLACK);
 tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.drawString("We could ", 13, 200, 2);
  delay(WAIT);
  tft.drawString("have lived",7, 170, 2);
  delay(WAIT);
  tft.drawString("this dance", 10, 140, 2);
  delay(WAIT);
  tft.drawString("FOREVER", 15, 100, 2);
  delay(WAIT);

   tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLACK, TFT_RED);
  tft.drawString("BUT", 10, 48, 4); // italics?
  delay(WAIT);
  tft.drawString("NOW", 18, 64, 4);
  delay(WAIT);

tft.fillScreen(TFT_RED);
  tft.setTextColor(TFT_BLACK, TFT_RED);
tft.setTextSize(2.5);
  tft.drawString(" Who's ", 15, 10, 2);
  tft.drawString(" gonna ", 15, 36, 2);
  tft.drawString("dance  ", 27, 67,2);
  tft.drawString(" with ", 15, 93,2);
  tft.setTextSize(2);
  tft.drawString("me? ", 27, 122,2);

 
  delay(WAIT);
  delay(WAIT);
  delay(WAIT);

 tft.fillScreen(TFT_BLACK);
 tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.drawString("Please ", 25, 180, 2.5);
  delay(WAIT);
  tft.drawString("STAY",7, 110, 4);
  delay(WAIT);
  
  tft.fillScreen(TFT_BLACK);
  delay(WAIT);

  tft.fillScreen(TFT_BLACK);
 tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.drawString("Please ", 25, 180, 2.5);
  tft.drawString("STAY",7, 110, 4);
  delay(WAIT);
 
/* tft.fillScreen(TFT_BLACK);
 tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.drawString("Please ", 10, 200, 3);
  delay(WAIT);
  tft.drawString("STAY",7, 150, 4);
  delay(WAIT);*/
  
  

 //We could have been so good together
//We could have lived this dance forever
//But now, who's gonna dance with me?
//Please stay


}
