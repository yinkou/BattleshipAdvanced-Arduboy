#ifndef BASHIP_H
#define BASHIP_H
#include <Arduboy.h>

struct BAShip{
  uint8_t positionX;
  uint8_t positionY;
  uint8_t fullLength;
  uint8_t remainingLength;
  bool horizontal;
};

BAShip BAShipMake(byte shipLength);
bool BAShipIsShipDestroyed(BAShip ship);

void drawHorizontalShip(uint8_t x, uint8_t y, uint8_t shipLength, uint8_t color, Arduboy &arduboy);
void drawVerticalShip(uint8_t x, uint8_t y, uint8_t shipLength, uint8_t color, Arduboy &arduboy);

#endif