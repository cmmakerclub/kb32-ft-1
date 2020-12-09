#include <Arduino.h>
#include <vector>
#include <WiFi.h>
#include <Wire.h>
#include "SPI.h"
#include "Adafruit_GFX.h"  //for matrix led
#include "Adafruit_LEDBackpack.h"

#include "KB_initBoard.h"
#include "KB_music.h"
#include "KB_LDR.h"
#include "KB_LM73.h"
#include "KB_ht16k33.h"
#include "MCP7941x.h"

#include "TFT_eSPI.h"  //for matrix led

TFT_eSPI tft = TFT_eSPI();
MCP7941x rtc = MCP7941x();

KB_board board = KB_board();
KB_music music = KB_music();
KB_LDR ldr = KB_LDR();
KB_LM73 lm73 = KB_LM73();
KB_8x16Matrix matrix = KB_8x16Matrix();

typedef int Number;
typedef int Boolean;
using namespace std;

void setup() {
  board.begin();
  music.begin();
  lm73.begin();
  matrix.displayBegin();
  ldr.begin();

  Wire.beginTransmission(0x70);
  delayMicroseconds(1);
  Wire.write(0x01);
  Wire.write((0x00));
  Wire.endTransmission();
  delay(100);

  tft.init();
  tft.setRotation(1);
  tft.invertDisplay(1);
  tft.fillScreen(TFT_BLACK);
  delay(100);

  Wire.beginTransmission(0x70);
  delayMicroseconds(1);
  Wire.write(0xEF);
  Wire.endTransmission();
  delay(30);

}
void loop() {
    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x03);              // sends one byte
    Wire.write(TFT_BLUE >> 8);            // sends one byte
    Wire.write(TFT_BLUE);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("BLUE...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x03);              // sends one byte
    Wire.write(TFT_YELLOW >> 8);            // sends one byte
    Wire.write(TFT_YELLOW);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("YELLOW...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x03);              // sends one byte
    Wire.write(TFT_GREEN >> 8);            // sends one byte
    Wire.write(TFT_GREEN);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("GREEN...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x03);              // sends one byte
    Wire.write(TFT_WHITE >> 8);            // sends one byte
    Wire.write(TFT_WHITE);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("WHITE...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x03);              // sends one byte
    Wire.write(TFT_PINK >> 8);            // sends one byte
    Wire.write(TFT_PINK);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("PINK...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x03);              // sends one byte
    Wire.write(TFT_BLACK >> 8);            // sends one byte
    Wire.write(TFT_BLACK);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("BLACK...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x04);              // sends one byte
    Wire.write(TFT_WHITE >> 8);            // sends one byte
    Wire.write(TFT_WHITE);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("WHITE...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x04);              // sends one byte
    Wire.write(TFT_GREEN >> 8);            // sends one byte
    Wire.write(TFT_GREEN);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("GREEN...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x04);              // sends one byte
    Wire.write(TFT_ORANGE >> 8);            // sends one byte
    Wire.write(TFT_ORANGE);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("ORANGE...")));

    Wire.beginTransmission(0x70); // transmit to device #4
    delayMicroseconds(1);
    Wire.write(0x04);              // sends one byte
    Wire.write(TFT_RED >> 8);            // sends one byte
    Wire.write(TFT_RED);              // sends one byte
    Wire.endTransmission();    // stop transmitting
    matrix.scrollText(String(String("RED...")));
}