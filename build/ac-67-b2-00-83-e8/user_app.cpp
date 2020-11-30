/*
  This example draws fonts (as used by the Adafruit_GFX library) onto the
  screen. These fonts are called the GFX Free Fonts (GFXFF) in this library.

  Other True Type fonts could be converted using the utility within the
  "fontconvert" folder inside the library. This converted has also been
  copied from the Adafruit_GFX library.

  Since these fonts are a recent addition Adafruit do not have a tutorial
  available yet on how to use the utility.   Linux users will no doubt
  figure it out!  In the meantime there are 48 font files to use in sizes
  from 9 point to 24 point, and in normal, bold, and italic or oblique
  styles.

  This example sketch uses both the print class and drawString() functions
  to plot text to the screen.

  Make sure LOAD_GFXFF is defined in the User_Setup.h file within the
  TFT_eSPI library folder.

  --------------------------- NOTE ----------------------------------------
  The free font encoding format does not lend itself easily to plotting
  the background without flicker. For values that changes on screen it is
  better to use Fonts 1- 8 which are encoded specifically for rapid
  drawing with background.
  -------------------------------------------------------------------------
  
  >>>>>>>>>>>>>>>>>>>>>>>>>>> WARNING <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

  As supplied with the default settings the sketch has 11 fonts loaded,
  i.e. GLCD (Font 1), Font 2, Font 4, Font 6, Font 7, Font 8 and five Free Fonts,
  even though they are not all used in the sketch.
  
  Disable fonts you do not need in User_Setup.h in the library folder.

  #########################################################################
  ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
  #########################################################################
*/

#include "SPI.h"
#include "TFT_eSPI.h"
#include <Wire.h>
//#include "Adafruit_LEDBackpack.h"
#include "Free_Fonts.h" // Include the header file attached to this sketch

// Use hardware SPI
TFT_eSPI tft = TFT_eSPI();
//Adafruit_8x16matrix matrix = Adafruit_8x16matrix();
unsigned long drawTime = 0;

void setup(void) {
//  matrix.begin(0x70);  // pass in the address
  Wire.begin(21 , 22, 400000);
  Serial.println("Initialized LCD");
  Wire.beginTransmission(0x70); // transmit to device #4
  delayMicroseconds(1);
  Wire.write(0x01);              // sends one byte
  Wire.write(0x01);              // sends one byte
  Wire.endTransmission();    // stop transmitting
  delay(100);

  // Use this initializer if you're using a 0.96" TFT
  tft.init();   // initialize a ST7735S chip
  tft.setRotation(1);
  tft.invertDisplay(1);
  tft.fillScreen(TFT_BLACK);
  delay(100);

  Wire.beginTransmission(0x70); // transmit to device #4
  delayMicroseconds(1);
  Wire.write(0xEF);              // sends one byte
  Wire.endTransmission();    // stop transmitting
  delay(30);
}

void loop() {
  // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  // Select different fonts to draw on screen using the print class
  // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  tft.setFreeFont(TH14);     // Select the orginal small TomThumb font
  // For comaptibility with Adafruit_GFX library the text background is not plotted when using the print class
  // even if we specify it.
  tft.setTextColor(TFT_YELLOW);
  tft.setCursor(0, 20);    // Set cursor near top left corner of screen 
  tft.print("สวัสดี เค บี ๓๒");    // Print the font name onto the TFT screen
  tft.setCursor(20, 50);    // Set cursor near top left corner of screen
  tft.setTextColor(TFT_WHITE);
  tft.print("ลุงตู่ กินน้ำ");
  tft.setFreeFont(TH14);     // Select the orginal small TomThumb font
  tft.setCursor(50, 75);    // Set cursor near top left corner of screen
  tft.setTextColor(TFT_RED);
  tft.print("บนปากโอ่ง");
  delay(3000);

}


// There follows a crude way of flagging that this example sketch needs fonts which
// have not been enbabled in the User_Setup.h file inside the TFT_HX8357 library.
//
// These lines produce errors during compile time if settings in User_Setup are not correct
//
// The error will be "does not name a type" but ignore this and read the text between ''
// it will indicate which font or feature needs to be enabled
//
// Either delete all the following lines if you do not want warnings, or change the lines
// to suit your sketch modifications.

#ifndef LOAD_GLCD
//ERROR_Please_enable_LOAD_GLCD_in_User_Setup
#endif

#ifndef LOAD_FONT2
//ERROR_Please_enable_LOAD_FONT2_in_User_Setup!
#endif

#ifndef LOAD_FONT4
//ERROR_Please_enable_LOAD_FONT4_in_User_Setup!
#endif

#ifndef LOAD_FONT6
//ERROR_Please_enable_LOAD_FONT6_in_User_Setup!
#endif

#ifndef LOAD_FONT7
//ERROR_Please_enable_LOAD_FONT7_in_User_Setup!
#endif

#ifndef LOAD_FONT8
//ERROR_Please_enable_LOAD_FONT8_in_User_Setup!
#endif

#ifndef LOAD_GFXFF
ERROR_Please_enable_LOAD_GFXFF_in_User_Setup!
#endif