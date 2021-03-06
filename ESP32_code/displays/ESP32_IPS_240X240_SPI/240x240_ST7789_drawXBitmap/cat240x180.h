// Images can be converted to XBM format by using the online converter here:
// https://convertio.co/jpg-xbm/
// The output must be pasted in a header file, renamed and adjusted to appear
// as as a const unsigned char array in PROGMEM (FLASH program memory), i.e. like this file!

// The xbm format adds padding to pixel rows so they are a whole number of bytes

// The library ignores the padding bits when drawing the image on the display.

// Example of the correct format is shown below

// cat 240 x 180 pixel array in XBM format
#define catWidth  240  // cat width
#define catHeight 180   // cat height

// Image is stored in this array
PROGMEM const unsigned char cat[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x40, 
  0x08, 0x50, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x12, 0x10, 0x04, 
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x14, 
  0x00, 0x40, 0x00, 0x80, 0x56, 0x51, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x08, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x04, 0x04, 
  0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x9A, 0x61, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x40, 0x8A, 0x89, 
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xD0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x08, 0x22, 0x18, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x20, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x90, 0x18, 0x02, 
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x12, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC2, 0x04, 0x00, 0x02, 0x80, 0x00, 
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x10, 
  0x12, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 
  0x20, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x00, 0x41, 0x88, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xA0, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x88, 
  0x2A, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x49, 
  0x08, 0x00, 0x00, 0x04, 0x00, 0x84, 0x80, 0x44, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x92, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x04, 
  0x04, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  0x22, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x48, 0x09, 0x00, 
  0x00, 0x00, 0x02, 0x00, 0x80, 0x00, 0x62, 0x02, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x08, 0x00, 0x00, 0x00, 0xA5, 
  0x00, 0x00, 0xA0, 0x21, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x04, 
  0xD4, 0x35, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x01, 0x00, 0x00, 0x00, 0xDB, 0x00, 0x00, 0xD5, 0x44, 0x00, 0x10, 
  0x00, 0x08, 0x00, 0x00, 0x60, 0x03, 0x28, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0xE0, 0x14, 
  0x00, 0xD4, 0x13, 0x26, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0xA8, 0x05, 
  0x95, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x74, 0xC9, 0x40, 0x03, 0x68, 0x08, 0x04, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x28, 0xB4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x80, 0x12, 
  0xE4, 0x1B, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x0A, 
  0x56, 0x06, 0x01, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0x08, 0x09, 0x04, 0x02, 0x82, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x40, 0xA5, 0x28, 0x29, 0x02, 0x58, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x92, 
  0x88, 0x04, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x41, 0x84, 
  0xD9, 0x46, 0x81, 0x4A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x00, 0x06, 0x12, 0x84, 0x00, 0x28, 0x00, 0x06, 
  0x00, 0x00, 0x00, 0x50, 0x94, 0x39, 0x2A, 0xB9, 0x01, 0xF0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x59, 0x5A, 
  0x12, 0x45, 0x00, 0xB8, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0xA0, 0x02, 0x82, 0x02, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x6B, 0x45, 0x92, 0x49, 0x14, 0x24, 0xB6, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBB, 0x24, 0x88, 
  0x20, 0x50, 0x5C, 0xAE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x66, 0x29, 0x12, 0x04, 0x26, 0xA3, 0x7F, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x5A, 0x0A, 0x00, 
  0x50, 0xD8, 0x5A, 0x5E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x97, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x50, 0x05, 0x20, 0x42, 0x45, 0xA5, 0xB6, 0xB5, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 
  0x3D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x88, 0x92, 0x8A, 
  0x56, 0x9C, 0xD7, 0x4E, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x44, 0x08, 0xD7, 0x05, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x7A, 0x08, 0x00, 0x18, 0xA9, 0x67, 0x7E, 0xF3, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
  0xFF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x13, 0x30, 0x13, 
  0xD0, 0xB5, 0xDF, 0x6D, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x94, 0x40, 0xED, 0xED, 0x77, 0xDD, 0xFC, 0xFF, 0x0B, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
  0xFF, 0xB7, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x80, 0x9A, 0x6A, 
  0x56, 0xBA, 0xDF, 0xFF, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0xFF, 0xFF, 0x16, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xBF, 0x15, 0x64, 0x95, 0xF5, 0xD7, 0xF9, 0xFF, 0x1E, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  0xFF, 0xEF, 0x3F, 0x02, 0x00, 0x00, 0x00, 0x80, 0x25, 0x60, 0xBF, 0x65, 
  0xEE, 0x55, 0xFF, 0xFF, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xFF, 0xFF, 0xDF, 0x05, 0x00, 0x00, 
  0x00, 0x40, 0x57, 0x95, 0xD9, 0x96, 0x79, 0xFF, 0xED, 0xFF, 0x2F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0xC0, 0x2D, 0x5B, 0x57, 0x5B, 
  0xC5, 0xFF, 0x5F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x80, 0xF6, 0xDA, 0x99, 0x96, 0x7A, 0xDD, 0xFF, 0x7A, 0x27, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x80, 0xE6, 0x65, 0xA6, 0x78, 
  0xD5, 0xFF, 0xFF, 0xFB, 0xBF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
  0x40, 0x80, 0x1F, 0xDA, 0x15, 0xA5, 0xFB, 0x7F, 0xBE, 0x6E, 0xFB, 0x0A, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0xF0, 0x55, 0x16, 0x10, 0x90, 0xFD, 
  0xFF, 0xFF, 0xFB, 0xF7, 0xDF, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDF, 0xFF, 0xFF, 0xFF, 0x07, 0xC0, 
  0xDD, 0xFF, 0x96, 0x65, 0x66, 0x96, 0xFF, 0xDF, 0x5F, 0x57, 0xBE, 0xF7, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFB, 0xFF, 0xFF, 0xFF, 0x17, 0xE8, 0xD7, 0xFF, 0x7B, 0xB5, 0x7D, 0xB8, 
  0xFF, 0xFF, 0xA9, 0xFC, 0xFF, 0xDF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x40, 
  0x7E, 0xFE, 0xFF, 0x5A, 0xC6, 0xE3, 0xDD, 0x3F, 0xDF, 0xDF, 0xFD, 0xF9, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xBF, 0xFF, 0xFF, 0xFF, 0xBF, 0xF1, 0xEF, 0xEF, 0xF7, 0x53, 0xF5, 0xFF, 
  0x9F, 0xEB, 0x36, 0xAF, 0xFB, 0xF7, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0xFD, 0xDF, 0xBE, 0x5A, 0xFD, 0xFF, 0x9D, 0xDF, 0xFA, 0xFF, 0x6F, 
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xF5, 0xFF, 0xFF, 0xFF, 0x2F, 0xFE, 0x5B, 
  0xFF, 0x75, 0xFE, 0xE7, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xBF, 0xB4, 0xDF, 0xD3, 0xC0, 0xFF, 0x7F, 0xAA, 0xB5, 0x7F, 0xFF, 0xEF, 
  0xFD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xED, 0xFF, 0xDD, 0xFF, 0xB7, 0x8C, 0xBF, 
  0xFF, 0xDD, 0xEB, 0xAF, 0xFF, 0xFF, 0xAD, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0xB5, 0xFE, 0x5D, 0x61, 0xFF, 0xEB, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x95, 0xFF, 0xFF, 0xFF, 0xFF, 0xBD, 0x6F, 0x2F, 0xFE, 0xFF, 0x99, 0x67, 
  0xFB, 0xF7, 0xFD, 0xDB, 0xFF, 0xFF, 0x77, 0x05, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFD, 0xFF, 0xFF, 0xEF, 0xF3, 
  0xB5, 0xD2, 0xFD, 0xDF, 0xF7, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFE, 0xFF, 0xFF, 0xBF, 0xFB, 0xDF, 0x9D, 0xFF, 0xBF, 0xED, 0xFD, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x55, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x63, 0xE5, 0xFF, 0xFF, 0x35, 0xE9, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xAF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xDE, 0xFA, 0xFF, 0xFF, 0xFB, 0xFF, 0xEF, 0xF7, 0xFF, 0xFF, 0x47, 0xF2, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x5D, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xDF, 0xED, 0xFF, 0xFF, 0xAF, 0xFD, 0xDF, 0xF6, 0xFB, 0xFF, 0xFF, 0xFF, 
  0xEF, 0xEF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xEF, 0xFA, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xF5, 0xFF, 0xFF, 0x0F, 0xB8, 
  0x7F, 0xEF, 0xFF, 0xFF, 0xFF, 0x7F, 0xF6, 0xFF, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB6, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0x7E, 0xFE, 0xFF, 0xFF, 0xDF, 
  0xFE, 0xB7, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x6E, 0xF7, 0xFF, 0xFF, 0xFE, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0x2F, 0xFE, 
  0xDF, 0xFA, 0xFF, 0xFF, 0xFF, 0x96, 0xED, 0xFF, 0x3F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF7, 0xEC, 0xFF, 0xFF, 0xFD, 0xFF, 
  0xBF, 0xFF, 0xFF, 0xFF, 0x5F, 0xDA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 
  0xFF, 0xDD, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xF7, 0xFF, 0x7F, 0xFD, 0xFF, 0xDF, 0xBF, 0xFF, 0xFF, 0x9F, 0xE7, 
  0xFF, 0xF4, 0xFF, 0xFF, 0xFF, 0xBB, 0xFF, 0x7F, 0xDF, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x77, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xEF, 0xFB, 0xFF, 0xFF, 0x7F, 0xBF, 0xFF, 0xEF, 0xFF, 0xFF, 0x3F, 0xD8, 
  0x77, 0xFE, 0xFD, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xBB, 0xEA, 0xFF, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x9E, 
  0x97, 0xFE, 0xFF, 0xFF, 0xAD, 0xFC, 0xEF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0xED, 0xFF, 0xFF, 0x5F, 0x7D, 0xFF, 0xFB, 0xFF, 0xFF, 0x57, 0xFB, 
  0xFF, 0xEF, 0x7B, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x6F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xDD, 0xF5, 0xFF, 0xFF, 0xFF, 0xFE, 
  0x7F, 0xFF, 0xFF, 0xFF, 0x26, 0xFF, 0xDF, 0xFF, 0xBF, 0x9F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xB7, 0xFF, 0x7B, 0xFE, 0x7D, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xFD, 0xFF, 0xFF, 0xFF, 0x7F, 0x4B, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xDF, 0xFF, 0xDF, 0x7F, 0xFE, 0x7F, 0xFA, 0xFF, 0xFF, 0xFF, 0xF9, 
  0xFF, 0xFF, 0xBF, 0x7E, 0xD5, 0xFF, 0xEF, 0xFF, 0xFF, 0xEB, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x7F, 0xFF, 0x7F, 0xFE, 0xFB, 
  0xEF, 0xFD, 0xFF, 0xFF, 0x7F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xA5, 0xFF, 
  0xFD, 0xFF, 0x6B, 0xFF, 0x4F, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xED, 0xFE, 0xFF, 0xDF, 0x5D, 0xFF, 0x6B, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xBF, 0xBF, 0xFE, 0xFF, 0xFF, 0xFF, 0xDF, 0xFA, 0xFF, 0x7F, 
  0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x77, 0xFA, 0xFE, 
  0xBA, 0xFE, 0xFF, 0xFF, 0xAF, 0xEF, 0xFF, 0xFE, 0xFF, 0x7F, 0xF9, 0xFF, 
  0xFF, 0xFF, 0xB9, 0x7F, 0xED, 0x67, 0x0F, 0x00, 0x80, 0x06, 0x00, 0x00, 
  0xB5, 0xFF, 0xFF, 0x7F, 0xD5, 0x7D, 0xAE, 0xFE, 0xFF, 0xFF, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x3B, 0xFE, 0xFF, 0xFF, 0x9F, 0xCF, 0xFA, 0xFF, 0xFF, 
  0x77, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xFE, 0xEF, 0xFE, 0xEF, 0x5C, 0xFF, 
  0xFB, 0xFB, 0xFF, 0xFF, 0xDF, 0xFB, 0xFF, 0xFF, 0xFF, 0xAE, 0xF2, 0xFF, 
  0xFF, 0xFF, 0x75, 0xCE, 0xFF, 0xFF, 0xDF, 0x00, 0xF8, 0x03, 0x00, 0x00, 
  0xFF, 0xFF, 0xFB, 0x6F, 0x6E, 0xFF, 0xAD, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFB, 0x2F, 0xFD, 0xFF, 0xFF, 0x3F, 0xFF, 0x6F, 0xBD, 0xFF, 
  0xFE, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xB8, 0xFF, 0xFF, 0xBF, 0xD1, 0xFF, 
  0x7F, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0x9B, 0xFE, 0xFF, 
  0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0xED, 0xFD, 0xDF, 0x27, 0xE8, 0xFE, 0x77, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFD, 0xEF, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFB, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0x20, 0x00, 0xF6, 0x7F, 0xFD, 0x5F, 0xB6, 0x7F, 
  0xBD, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x69, 0x96, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0xD4, 0xEF, 0xF7, 0xED, 0xE2, 0x5B, 0x5E, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xBF, 0xFB, 0xEB, 0x65, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFD, 0xFF, 0xBF, 0x37, 0xFC, 0xFF, 
  0xBF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFD, 0x97, 0xDA, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 
  0xFC, 0xFF, 0xFD, 0x1F, 0xB9, 0xF7, 0xDF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x65, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xBF, 0x00, 0x00, 0x00, 0xF2, 0xFF, 0xEF, 0x73, 0xEF, 0xDF, 
  0x7F, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xDF, 0x4A, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 
  0xFC, 0xFF, 0xDB, 0xB6, 0xEA, 0xEF, 0x77, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xE5, 0xDA, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xF6, 0x7F, 0xFF, 0xEF, 0xFB, 0xF7, 
  0x9F, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE9, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x05, 0x00, 0x00, 
  0x90, 0xDE, 0xFA, 0x7F, 0xE6, 0xEF, 0x49, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xE9, 0xFF, 0xDF, 0xE7, 0xBD, 0xFE, 
  0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0xF6, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x01, 0x00, 0x00, 
  0xC0, 0x7F, 0xED, 0xBB, 0xAD, 0xFE, 0xFB, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xDD, 0xFD, 0xFF, 0xBF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0xA0, 0xFB, 0xFB, 0xDF, 0x5A, 0xFF, 
  0xDD, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x01, 0x00, 0x00, 
  0xA0, 0x6E, 0x7D, 0xFB, 0xDF, 0xFF, 0xDF, 0xE7, 0xE5, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xDF, 0xFD, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x04, 0x00, 0x00, 0x00, 0xF5, 0xEB, 0x5F, 0xEA, 0xFF, 
  0x7F, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7D, 0xFE, 0xFF, 0xFF, 
  0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0xDF, 0xFF, 0xED, 0xFF, 0xFF, 0x69, 0xFE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xBE, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xA6, 0xFB, 0xDD, 0xF3, 0xFF, 
  0x7F, 0xD7, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0xFB, 0x5F, 0x7E, 0xFB, 0xDF, 0x99, 0xFD, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x40, 0x6E, 0xBF, 0xD9, 0x7F, 
  0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xFE, 0xFF, 0xFF, 
  0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x00, 0x00, 
  0x00, 0x40, 0x7D, 0xDE, 0xEB, 0xFF, 0xFF, 0xEC, 0xFB, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x80, 0xD6, 0x7F, 0xB5, 0xD7, 
  0xBF, 0x77, 0xFE, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0xA9, 0x6F, 0xEA, 0xFF, 0xFF, 0xD5, 0xEF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x10, 0x00, 0x80, 0x54, 0xF7, 0xBB, 0xFE, 
  0xFB, 0xBF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFD, 0xFF, 0xFF, 0xFF, 
  0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x40, 0x30, 
  0x00, 0x00, 0xE0, 0x77, 0xDE, 0xFF, 0xFF, 0x77, 0x9F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xA6, 0xDD, 0xA7, 0xFE, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 
  0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x82, 0x95, 0xBE, 0xFE, 0xFF, 0x7F, 0xE5, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x90, 0x7E, 0x5B, 0x7B, 
  0xFF, 0xFF, 0xEB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x4E, 0x56, 0xFD, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF0, 0xFF, 0xF9, 
  0xFF, 0xFF, 0x9D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 
  0xA2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0xAA, 0xFA, 0xEB, 0xFF, 0x7F, 0xF7, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD4, 0x5F, 0x74, 
  0xFF, 0xDF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 
  0xEA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC8, 0xED, 0x92, 0xFF, 0xFF, 0xF5, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x55, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xBD, 0xED, 
  0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x61, 0xCF, 0xB9, 0xFF, 0xDF, 0xD7, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5D, 0xBB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x20, 0x80, 0x76, 0xEF, 
  0xFA, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7B, 
  0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x81, 0xEE, 0x3E, 0xDD, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xBF, 0xFF, 0xFF, 0xF9, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0xBB, 0xFF, 
  0xFB, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xF9, 
  0xFD, 0xFF, 0x67, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0xF4, 0xFF, 0xF2, 0xFF, 0xF9, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xBF, 0xFF, 0x6F, 0xFF, 0xFF, 0xFF, 
  0x7D, 0xFD, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF1, 0x6F, 
  0xAF, 0xFF, 0xEF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xD8, 0xBF, 0x9A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB7, 0xFF, 0xFF, 0x3F, 0x9F, 0xFF, 0xFF, 
  0x3F, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0xF5, 
  0x7F, 0xED, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFE, 0xFF, 0x5F, 0xFF, 0xFF, 0xFF, 0x9C, 0xFF, 0xFF, 0x1F, 0x10, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x67, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 
  0xD1, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0xFD, 
  0xF5, 0x9B, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 
  0xFF, 0xFF, 0xFF, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x79, 0x76, 0x5F, 0xFB, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0xFE, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0xD4, 0x5E, 
  0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFD, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x40, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x84, 0x3C, 0xE9, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA6, 
  0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0xF9, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x9A, 0xF9, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 
  0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0xE0, 0xFE, 0xFF, 0xBF, 0xFF, 0xFF, 0xDF, 
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x4F, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x69, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF9, 0xFF, 0xF7, 0x7F, 0xFF, 0xDF, 
  0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xCF, 0x11, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x60, 
  0x08, 0xDE, 0xEE, 0xFF, 0xFF, 0xFF, 0x93, 0xFF, 0xFF, 0xFB, 0xFD, 0xFB, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x67, 0x06, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0xF6, 0xF7, 0xFF, 0xFF, 0xFF, 
  0xEE, 0xFF, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x17, 0x05, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x9D, 0xDA, 0xBF, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xFE, 0xFF, 0xEF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x52, 0x18, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0xBA, 0xFE, 0xFF, 0xFF, 0x7F, 
  0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x4B, 0x42, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x10, 0x4C, 0xD5, 0x5A, 0xFE, 0xFF, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x15, 0x41, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x37, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x0F, 0x84, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x81, 0xED, 0x5B, 0xFF, 0xFF, 0x54, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD2, 0x25, 0x30, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xDB, 0xDD, 0xFD, 0xDF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x5B, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x41, 0x80, 0x26, 0x7A, 0xFF, 0x7F, 0xD9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x26, 0x1D, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x99, 0xED, 0xFF, 0xFF, 
  0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0xDE, 0xA5, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x08, 0xA4, 0xF6, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x91, 0x18, 0x92, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x84, 0xE9, 0xFF, 0xFF, 
  0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xDF, 0x04, 0x94, 0x0C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x08, 0x82, 0x40, 0xF6, 0xFE, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x46, 0x28, 0xB0, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x90, 0x11, 0xAE, 0xFE, 0xBF, 
  0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x62, 0x02, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0xD0, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x04, 0x20, 0x8A, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFB, 
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x6F, 0xA5, 0x61, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x21, 0xA6, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x9A, 0x80, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xFE, 0xBF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x21, 0x84, 0x85, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x12, 0xBD, 0xEE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x63, 0x06, 0x1A, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x59, 0xA9, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x27, 0x81, 0x26, 0x00, 0x00, 0x03, 0x00, 0x00, 0x40, 0x00, 
  0x00, 0x00, 0x00, 0x50, 0x2D, 0xF8, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xD2, 0x26, 0x82, 0x1B, 
  0x40, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x20, 0x18, 0xE5, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x7F, 0x47, 0x24, 0x62, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0xC0, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x27, 0x01, 0x06, 0x81, 
  0x01, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x06, 0x04, 0x10, 
  0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xBF, 0x1C, 0xC0, 0x0C, 0x44, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x08, 0x00, 0x44, 0xFC, 0xA7, 0xFB, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5B, 0x51, 0x02, 0x53, 0x02, 
  0xA2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  0xA4, 0x29, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xAB, 0x67, 0x12, 0x09, 0x18, 0x18, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x30, 0x82, 0xF6, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5B, 0x30, 0x89, 0x47, 0x20, 
  0x08, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x26, 0xA0, 0xD3, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xBF, 0x9B, 0xD3, 0x0C, 0x02, 0xA8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x44, 0x60, 0x26, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0x75, 0x06, 0x33, 0xC7, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x00, 0xF9, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0xA9, 0x4E, 0x15, 0x99, 0x89, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x02, 0x20, 0xBA, 0xB5, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x57, 0x61, 0x20, 0x02, 0x20, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x18, 0x00, 0x00, 0x90, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x95, 0x6A, 0xB2, 0x29, 0x04, 0x20, 0x00, 0x01, 0x00, 0x04, 0x05, 0x00, 
  0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x90, 0xF7, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xF9, 0x7B, 0x91, 0x0C, 0x86, 0x06, 0x40, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x30, 0x00, 0x00, 0x40, 0x08, 0xEE, 0xFF, 0xFF, 0xFF, 0x7F, 0x77, 0xA2, 
  0x83, 0x95, 0x95, 0x8C, 0x1E, 0x20, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x40, 0x08, 0x90, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xBC, 0x54, 0x73, 0xCA, 0x41, 0x61, 0x20, 0x00, 
  0x24, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x04, 0x00, 0x00, 0x80, 0xD8, 0xF7, 0xFF, 0xFF, 0x7B, 0x9C, 0x94, 
  0x93, 0xD8, 0x40, 0x4A, 0x22, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0xC0, 0x00, 
  0xA8, 0xFE, 0xDF, 0x91, 0x45, 0x08, 0x6C, 0x21, 0x65, 0x05, 0x80, 0x09, 
  0x15, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x20, 0x00, 0xA8, 0xA5, 0x7B, 0x3F, 0xA2, 0x60, 0x09, 
  0x56, 0x84, 0x98, 0xDB, 0x0A, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 
  0x89, 0xF5, 0x0B, 0x24, 0xAB, 0x72, 0xE0, 0x5B, 0x00, 0x01, 0x20, 0x00, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x12, 0x00, 0x00, 0x00, 0x0C, 0x08, 0x98, 0x28, 0x29, 0x88, 0x68, 0x61, 
  0x58, 0xD4, 0x82, 0xA4, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x40, 0x06, 
  0x08, 0x19, 0x92, 0x11, 0x9B, 0x02, 0x89, 0xA6, 0x2D, 0x12, 0x80, 0xB9, 
  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x20, 0x04, 0x40, 0x00, 0x84, 0x40, 0x44, 0x62, 0x14, 0x05, 
  0x08, 0x47, 0x3C, 0x80, 0x38, 0x58, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x04, 0x00, 
  0x81, 0x22, 0x4C, 0x40, 0x66, 0xAA, 0x94, 0x1A, 0x00, 0x84, 0xA8, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0xA0, 0x60, 0x00, 0x00, 0x64, 0x08, 0x00, 
  0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x30, 0x40, 0x18, 0x84, 0x1C, 0xB0, 
  0x85, 0x2A, 0x44, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x02, 0x40, 0x00, 
  0x48, 0x05, 0x20, 0x00, 0xC1, 0x52, 0x25, 0x3D, 0x00, 0x08, 0x50, 0x54, 
  0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 
  0x00, 0x00, 0x06, 0x01, 0x03, 0x00, 0x00, 0x11, 0x00, 0x02, 0x64, 0x1C, 
  0x22, 0x42, 0x84, 0x08, 0x10, 0x00, 0x00, 0x04, 0x00, 0x08, 0x00, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x00, 0x02, 
  0x10, 0x10, 0x10, 0x00, 0x00, 0x97, 0x8D, 0x24, 0x15, 0xC2, 0x2B, 0x43, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x08, 0x10, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0xA0, 0x04, 0x00, 0x04, 0x41, 0x00, 0x40, 0x81, 0x10, 0x05, 
  0xAC, 0x1B, 0x34, 0x13, 0x44, 0xCE, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 
  0x60, 0x08, 0x81, 0x81, 0xE0, 0x03, 0x10, 0xC0, 0x90, 0x80, 0x3B, 0x02, 
  0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x82, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00, 0x08, 0x30, 
  0x42, 0x60, 0x30, 0x04, 0x08, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x0A, 0x60, 0x20, 0x00, 0x00, 0x00, 0x02, 0x10, 
  0x24, 0x00, 0x00, 0x20, 0x10, 0x80, 0x4A, 0xBA, 0x19, 0x28, 0xA5, 0x02, 
  0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x10, 0x10, 0xC0, 0x00, 0x00, 0x04, 0x20, 0x64, 0x03, 0x41, 
  0x88, 0x10, 0x62, 0x18, 0x20, 0x4A, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 
  0x00, 0x01, 0xC0, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x24, 
  0x80, 0x01, 0x00, 0x00, 0xA6, 0x26, 0xA4, 0x82, 0x80, 0x40, 0x41, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x44, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x08, 0x18, 0x24, 0x00, 0x00, 0x04, 0x40, 0x07, 0x18, 
  0x24, 0x98, 0x18, 0xE0, 0x46, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x25, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x20, 0x08, 
  0x80, 0x02, 0xA2, 0x00, 0x80, 0x40, 0x80, 0x03, 0x0A, 0x01, 0x86, 0xC9, 
  };