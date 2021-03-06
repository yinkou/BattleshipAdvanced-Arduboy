#ifndef MENUASSETS_H
#define MENUASSETS_H
#include <Arduboy2.h>


//112x64
PROGMEM const unsigned char BAMenuAssetShip[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xf0, 0xe0, 0xa0, 0xa0,
0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xf0, 0xf8,
0xfa, 0xfe, 0xf8, 0xf0, 0xe0, 0xe0, 0xa0, 0xa0,
0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xf0, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06,
0x06, 0x06, 0x06, 0xc6, 0x36, 0xfe, 0xff, 0x7f,
0x7f, 0xff, 0xff, 0x7f, 0xff, 0xe7, 0x06, 0x06,
0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80,
0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x60,
0x38, 0x0c, 0x07, 0xf1, 0x7e, 0x0f, 0x80, 0xe0,
0xff, 0xff, 0xe0, 0x80, 0x07, 0x3f, 0xfe, 0xe0,
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc,
0xfc, 0xfc, 0xff, 0xff, 0xff, 0xcc, 0xcc, 0xff,
0xff, 0xff, 0xfc, 0xfc, 0xff, 0xcf, 0xcf, 0xfc,
0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc,
0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xe0, 0xe0,
0xe0, 0x00, 0xe0, 0xe0, 0xe0, 0xc0, 0x40, 0x60,
0x10, 0x88, 0x7e, 0xfe, 0x0d, 0x75, 0xc4, 0x88,
0xe8, 0x7c, 0x7f, 0x3f, 0xbe, 0x9e, 0xdf, 0xdf,
0xcf, 0xef, 0xe7, 0xf7, 0x77, 0x37, 0xb7, 0xb7,
0xb7, 0xb7, 0xbe, 0xfe, 0xfe, 0xfe, 0xbe, 0xbf,
0xbf, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xcf,
0xe3, 0xfd, 0xfd, 0xf1, 0x79, 0x9f, 0xcf, 0xe3,
0xf9, 0xfd, 0xfc, 0x76, 0x38, 0x9f, 0xcf, 0xe3,
0xf9, 0xfc, 0xfe, 0xf6, 0xf8, 0xff, 0xff, 0xff,
0xbf, 0x60, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00,
0xc0, 0xc0, 0xc0, 0x80, 0xc0, 0xc0, 0xc0, 0xc0,
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
0x03, 0x07, 0xc7, 0xef, 0xff, 0xfe, 0x7f, 0x3f,
0x9f, 0xdf, 0xff, 0xff, 0xff, 0xfc, 0xa0, 0xa0,
0xa0, 0xbf, 0xb8, 0xbb, 0xbc, 0xbe, 0x3f, 0x7f,
0x7f, 0x7f, 0x6f, 0x77, 0x77, 0x73, 0xfb, 0xfb,
0xfd, 0xfd, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff,
0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
0x3f, 0x9f, 0x8f, 0x87, 0xdf, 0xdf, 0xdf, 0xdf,
0xcf, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xfb, 0xfb,
0xfb, 0xf9, 0xfd, 0xfc, 0xfd, 0xfd, 0xfd, 0xfd,
0xfd, 0xfd, 0xfd, 0xfd, 0xfe, 0xfe, 0xfe, 0x9e,
0x9e, 0x1e, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7,
0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00,
0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7e, 0x7e, 0xfe,
0xfe, 0xfd, 0xfd, 0xfd, 0xfc, 0xfe, 0xfe, 0xfe,
0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x3f, 0x07, 0x01, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0xf8, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,
0xe0, 0xe0, 0xe0, 0xe1, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9,
0xf9, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xfc, 0xf8, 0xf8, 0xf0, 0xe0
};

//132x16
PROGMEM const unsigned char BAMenuAssetWaves[] = {
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0xc0,
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0,
0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0x80,
0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xc0,
0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
0xe0, 0xf0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8,
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0,
0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0,
0x80, 0x80, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xdf, 0xcf, 0xef, 0xef, 0xef, 0xef,
0xef, 0xef, 0xef, 0xef, 0xdf, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xfb, 0xfd, 0xfc, 0xfe, 0xfe, 0xfc, 0xfd, 0xfd,
0xf9, 0xfb, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe,
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7,
0xf7, 0xf3, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb,
0xfb, 0xfb, 0xf3, 0xf7, 0xf7, 0xe7, 0xef, 0xef,
0xef, 0xe7, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

//72x8
PROGMEM const unsigned char BAMenuAssetTitle[] = {
0x41, 0x7f, 0x7f, 0x45, 0x7f, 0x7b, 0x00, 0x40,
0x60, 0x78, 0x17, 0x7f, 0x78, 0x60, 0x40, 0x03,
0x41, 0x7f, 0x7f, 0x41, 0x03, 0x00, 0x03, 0x41,
0x7f, 0x7f, 0x41, 0x03, 0x00, 0x7f, 0x7f, 0x41,
0x40, 0x40, 0x60, 0x00, 0x41, 0x7f, 0x7f, 0x49,
0x5d, 0x63, 0x00, 0x66, 0x4f, 0x49, 0x49, 0x79,
0x33, 0x00, 0x41, 0x7f, 0x7f, 0x49, 0x08, 0x49,
0x7f, 0x7f, 0x41, 0x00, 0x41, 0x7f, 0x7f, 0x41,
0x00, 0x41, 0x7f, 0x7f, 0x49, 0x0f, 0x0f, 0x00
};

#endif
