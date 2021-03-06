#ifndef MAPSPRITES_H
#define MAPSPRITES_H
#include <Arduboy2.h>

// Types are negative because they will be stored in the player map
// and the ships of the player are also stored there with their indices
typedef enum BAMapTileType{
  BAMapTileTypeWater0 = -4, // Pure black
  BAMapTileTypeWater1,      // set to this and it will animate the next 2
  BAMapTileTypeWater2,
  BAMapTileTypeWater3,

  BAMapTileTypeMountain = -5,

  BAMapTileTypeExplosion1 = -9,
  BAMapTileTypeExplosion2,
  BAMapTileTypeExplosion3,
  BAMapTileTypeExplosion4,

  BAMapTileTypeDestroyedShip = -10
}
BAMapTye;


// All sprites are 8x8

// --------------------------------------------------------------
// Map cursor
const PROGMEM unsigned char BAMap_Cursor_01[] = {
  0x7e, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7e
};

const PROGMEM unsigned char BAMap_Cursor_02[] = {
  0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00
};


// --------------------------------------------------------------
// Ship Horizontal

const PROGMEM unsigned char BAMap_Sprite_Ship_horizontal_1[] = {
  0x42, 0x5a, 0x66, 0x42, 0x81, 0x81, 0xbd, 0x81
};

PROGMEM const unsigned char BAMap_Sprite_Ship_horizontal_2[] = {
  0x81, 0x81, 0xa5, 0x81, 0x81, 0xa5, 0x81, 0x81
};

PROGMEM const unsigned char BAMap_Sprite_Ship_horizontal_3[] = {
  0x81, 0x81, 0xbd, 0x99, 0x99, 0x42, 0x24, 0x18
};

PROGMEM const unsigned char BAMap_Sprite_Ship_horizontal_single[] = {
0x18, 0x24, 0x42, 0x5a, 0x42, 0x42, 0x24, 0x18
};

PROGMEM const unsigned char BAMap_Sprite_Ship_destroyed[] = {
0x81, 0x10, 0x4a, 0x04, 0x88, 0x11, 0x00, 0x42
};


// --------------------------------------------------------------
// Ship Vertical

PROGMEM const unsigned char BAMap_Sprite_Ship_vertical_1[] = {
0xf8, 0x04, 0x22, 0x39, 0x39, 0x22, 0x04, 0xf8
};

PROGMEM const unsigned char BAMap_Sprite_Ship_vertical_2[] = {
0xff, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0xff
};

PROGMEM const unsigned char BAMap_Sprite_Ship_vertical_3[] = {
0x0f, 0xf0, 0x22, 0x42, 0x42, 0x22, 0xf0, 0x0f
};

PROGMEM const unsigned char BAMap_Sprite_Ship_vertical_single[] = {
0x00, 0x3c, 0x42, 0x91, 0x91, 0x42, 0x3c, 0x00
};


// --------------------------------------------------------------
// Map

PROGMEM const unsigned char BAMap_Sprite_Water1[] = {
0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x00, 0x10
};

PROGMEM const unsigned char BAMap_Sprite_Water2[] = {
0x00, 0x01, 0x00, 0x04, 0x00, 0x10, 0x00, 0x40
};

PROGMEM const unsigned char BAMap_Sprite_Water3[] = {
0x08, 0x00, 0x20, 0x00, 0x80, 0x00, 0x00, 0x00
};

PROGMEM const unsigned char BAMap_Sprite_Mountain[] = {
0xf8, 0xfc, 0xde, 0xaf, 0xd5, 0xaa, 0xd4, 0xf8
};


// --------------------------------------------------------------
// Explosion

PROGMEM const unsigned char BAMap_Sprite_Explosion1[] = {
0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00
};

PROGMEM const unsigned char BAMap_Sprite_Explosion2[] = {
0x00, 0x00, 0x24, 0x18, 0x18, 0x24, 0x00, 0x00
};

PROGMEM const unsigned char BAMap_Sprite_Explosion3[] = {
0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, 0x81
};

PROGMEM const unsigned char BAMap_Sprite_Explosion4[] = {
0x81, 0x5a, 0x24, 0x42, 0x42, 0x24, 0x5a, 0x81
};


#endif
