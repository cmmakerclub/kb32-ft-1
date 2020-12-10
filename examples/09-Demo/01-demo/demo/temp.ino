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
#include "KB32FT.h"
#include "TFT_eSPI.h"  //for matrix led

TFT_eSPI tft = TFT_eSPI();
MCP7941x rtc = MCP7941x();

KB_board board = KB_board();
KB_music music = KB_music();
KB_LDR ldr = KB_LDR();
KB_LM73 lm73 = KB_LM73();
KB_32FT kb32ft = KB_32FT();
KB_8x16Matrix matrix = KB_8x16Matrix();

typedef int Number;
typedef int Boolean;
using namespace std;

void setup() {
  Serial.begin(115200);
  board.begin();
  music.begin();
  lm73.begin();
  matrix.displayBegin();
  ldr.begin();
  kb32ft.begin();
}
void loop() {
  uint16_t tmp = kb32ft.readTempSTM1();
  uint16_t tmp1 = kb32ft.readTempSTM2();
  uint16_t tmp2 = kb32ft.readTempSTM3();
  uint16_t tmp3 = lm73.readTemp() * 10;
  Serial.print(tmp);
  Serial.print(",");
  Serial.print(tmp1);
  Serial.print(",");
  Serial.print(tmp2);
  Serial.print(",");
  Serial.println(tmp3);
}