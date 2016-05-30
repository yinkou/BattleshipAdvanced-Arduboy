#ifndef BAUI_H
#define BAUI_H

// all 30x9 size

// cancel button
PROGMEM const unsigned char BAUI_cancel[] = {
0xff, 0x01, 0x01, 0x7d, 0x45, 0x45, 0x01, 0x79,
0x25, 0x79, 0x01, 0x7d, 0x09, 0x11, 0x7d, 0x01,
0x7d, 0x45, 0x45, 0x01, 0x7d, 0x55, 0x45, 0x01,
0x7d, 0x41, 0x41, 0x01, 0x01, 0xff, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01
};

PROGMEM const unsigned char BAUI_cancel_selected[] = {
0xff, 0xff, 0xff, 0x83, 0xbb, 0xbb, 0xff, 0x87,
0xdb, 0x87, 0xff, 0x83, 0xf7, 0xef, 0x83, 0xff,
0x83, 0xbb, 0xbb, 0xff, 0x83, 0xab, 0xbb, 0xff,
0x83, 0xbf, 0xbf, 0xff, 0xff, 0xff, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01
};

// place infos
PROGMEM const unsigned char BAUI_a_rotate[] = {
0x7c, 0xfe, 0xff, 0x87, 0xdb, 0x87, 0xff, 0xfe,
0x7c, 0x00, 0x00, 0x7c, 0x34, 0x5c, 0x00, 0x7c,
0x44, 0x7c, 0x00, 0x04, 0x7c, 0x04, 0x00, 0x00,
0x02, 0x22, 0x44, 0xf8, 0x40, 0x20, 0x00, 0x00,
0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00
};

PROGMEM const unsigned char BAUI_b_place[] = {
0x7c, 0xfe, 0xff, 0x83, 0xab, 0x97, 0xff, 0xfe,
0x7c, 0x00, 0x00, 0x7c, 0x14, 0x1c, 0x00, 0x7c,
0x40, 0x40, 0x00, 0x78, 0x24, 0x78, 0x00, 0x7c,
0x44, 0x44, 0x00, 0x7c, 0x54, 0x44, 0x00, 0x00,
0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00
};


PROGMEM const unsigned char BAUI_b_aim[] = {
0x7c, 0xfe, 0xff, 0x83, 0xab, 0x97, 0xff, 0xfe,
0x7c, 0x00, 0x00, 0x78, 0x24, 0x24, 0x78, 0x00,
0x7c, 0x00, 0x7c, 0x08, 0x10, 0x08, 0x7c, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
};


inline void drawText(char *text, ABPoint position, uint8_t color){
  for(byte i = 0; i < strlen(text); i++){
    arduboy.drawChar(position.x + i*6, position.y, text[i], color, (color+1)%2, 1);
    // 
  void drawChar(int16_t x, int16_t y, unsigned char c, uint8_t color, uint8_t bg, uint8_t size);
  }
}

inline void drawButton(char *title, ABRect frame, bool selected){

  // limit button to fit text
  uint8_t textLength = strlen(title)*6;
  
  frame.size.width = (frame.size.width < (textLength+2))? (textLength+2) : frame.size.width;
  frame.size.height = (frame.size.height < 10)? 10 : frame.size.height;

  // calc text pos
  ABPoint textPos = ABPointMake( frame.origin.x + (frame.size.width - textLength + 2)/2, frame.origin.y + (frame.size.height - 6)/2);

  if(selected){
    arduboy.fillRect(frame.origin.x, frame.origin.y, frame.size.width, frame.size.height, WHITE);
    drawText(title, textPos, BLACK);
  }
  else{
    arduboy.fillRect(frame.origin.x, frame.origin.y, frame.size.width, frame.size.height, BLACK);
    arduboy.drawRect(frame.origin.x, frame.origin.y, frame.size.width, frame.size.height, WHITE);
    drawText(title, textPos, WHITE);
  }
}

#endif
