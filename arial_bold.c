// arial_bold.c
// Font type    : Full (95 characters)
// Font size    : 16x16 pixels
// Memory usage : 3044 bytes
// Submitted by : MBWK

#if defined(__AVR__)
#include <avr/pgmspace.h>
#define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
#define PROGMEM
#define fontdatatype const unsigned char
#elif defined(__arm__)
#define PROGMEM
#define fontdatatype const unsigned char
#endif

fontdatatype arial_bold[3044] PROGMEM = {
  0x10, 0x10, 0x20, 0x5F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // <space>
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // !
  0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // "
  0x00, 0x00, 0x00, 0x00, 0x03, 0x60, 0x03, 0x60, 0x06, 0xC0, 0x3F, 0xF0, 0x3F, 0xF0, 0x06, 0xC0, 0x0D, 0x80, 0x3F, 0xF0, 0x3F, 0xF0, 0x0D, 0x80, 0x1B, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, // #
  0x00, 0x00, 0x01, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x0D, 0x60, 0x0D, 0x00, 0x0F, 0x00, 0x07, 0x80, 0x03, 0xC0, 0x01, 0xE0, 0x0D, 0x60, 0x0D, 0x60, 0x07, 0xC0, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00, // $
  0x00, 0x00, 0x00, 0x00, 0x3C, 0x18, 0x66, 0x30, 0x66, 0x30, 0x66, 0x60, 0x66, 0xC0, 0x3C, 0xC0, 0x01, 0x9E, 0x01, 0xB3, 0x03, 0x33, 0x03, 0x33, 0x06, 0x33, 0x0C, 0x1E, 0x00, 0x00, 0x00, 0x00, // %
  0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0xE0, 0x0C, 0x60, 0x0C, 0x60, 0x07, 0xC0, 0x07, 0x80, 0x0D, 0x90, 0x19, 0xD8, 0x18, 0xF0, 0x18, 0x78, 0x0F, 0xFC, 0x07, 0x88, 0x00, 0x00, 0x00, 0x00, // &
  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '
  0x00, 0x00, 0x01, 0x80, 0x03, 0x00, 0x03, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x03, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, // (
  0x00, 0x00, 0x06, 0x00, 0x03, 0x00, 0x03, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x03, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, // )
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0x80, 0x33, 0x98, 0x3F, 0xF8, 0x07, 0xC0, 0x07, 0xC0, 0x0E, 0xE0, 0x1C, 0x70, 0x04, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // *
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x07, 0xF8, 0x07, 0xF8, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // +
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, // ,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // -
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // /

  0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x0E, 0x70, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, // 0
  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0x80, 0x07, 0x80, 0x0D, 0x80, 0x09, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, // 1
  0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x0E, 0x30, 0x0C, 0x30, 0x00, 0x30, 0x00, 0x60, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x06, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, // 2
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x07, 0xF0, 0x0E, 0x30, 0x00, 0x30, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x70, 0x00, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, // 3
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x01, 0xE0, 0x03, 0x60, 0x03, 0x60, 0x06, 0x60, 0x0C, 0x60, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, // 4
  0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x07, 0xE0, 0x06, 0x00, 0x0C, 0x00, 0x0F, 0xC0, 0x0F, 0xE0, 0x0C, 0x70, 0x00, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, // 5
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x07, 0xF0, 0x06, 0x30, 0x0C, 0x00, 0x0D, 0xC0, 0x0F, 0xE0, 0x0E, 0x70, 0x0C, 0x30, 0x0C, 0x30, 0x06, 0x30, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, // 6
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x60, 0x00, 0xC0, 0x00, 0xC0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x03, 0x80, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // 7
  0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x07, 0xE0, 0x07, 0xE0, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, // 8
  0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x0C, 0x60, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xF0, 0x03, 0xB0, 0x00, 0x30, 0x0C, 0x60, 0x0F, 0xE0, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, // 9
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // :
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x80, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, // ;
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0xE0, 0x03, 0xC0, 0x0F, 0x00, 0x1C, 0x00, 0x0F, 0x00, 0x03, 0xC0, 0x00, 0xE0, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // <
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // =
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x01, 0xE0, 0x00, 0x70, 0x01, 0xE0, 0x07, 0x80, 0x0E, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // >
  0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x0E, 0x30, 0x0C, 0x30, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, // ?

  0x00, 0x00, 0x07, 0xC0, 0x0C, 0x30, 0x13, 0x78, 0x17, 0xE8, 0x2C, 0xC8, 0x2C, 0xC8, 0x2C, 0xC8, 0x2F, 0xD0, 0x26, 0xE0, 0x10, 0x08, 0x08, 0x10, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // @
  0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0x80, 0x06, 0xC0, 0x06, 0xC0, 0x06, 0xC0, 0x0C, 0x60, 0x0C, 0x60, 0x0F, 0xE0, 0x1F, 0xF0, 0x18, 0x30, 0x18, 0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, // A
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x1F, 0xF0, 0x18, 0x30, 0x18, 0x30, 0x18, 0x30, 0x1F, 0xE0, 0x1F, 0xF0, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0xF0, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, // B
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x0F, 0xF0, 0x0C, 0x38, 0x1C, 0x10, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x1C, 0x10, 0x0C, 0x38, 0x0F, 0xF0, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, // C
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x1F, 0xF0, 0x18, 0x30, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x30, 0x1F, 0xF0, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, // D
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x0F, 0xF8, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0F, 0xF8, 0x0F, 0xF8, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0F, 0xF8, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, // E
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0F, 0xE0, 0x0F, 0xE0, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, // F
  0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x1F, 0xF0, 0x18, 0x38, 0x38, 0x10, 0x30, 0x00, 0x30, 0x00, 0x30, 0xF8, 0x30, 0xF8, 0x38, 0x18, 0x18, 0x38, 0x1F, 0xF8, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, // G
  0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0xF8, 0x1F, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, // H
  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, // I
  0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, // J
  0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x30, 0x18, 0x60, 0x18, 0xC0, 0x19, 0x80, 0x1B, 0xC0, 0x1E, 0xC0, 0x1C, 0x60, 0x18, 0x70, 0x18, 0x30, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, // K
  0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, // L
  0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x38, 0x3C, 0x78, 0x3C, 0x78, 0x34, 0x58, 0x36, 0xD8, 0x36, 0xD8, 0x36, 0xD8, 0x33, 0x98, 0x33, 0x98, 0x33, 0x98, 0x31, 0x18, 0x00, 0x00, 0x00, 0x00, // M
  0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x1C, 0x18, 0x1E, 0x18, 0x1E, 0x18, 0x1B, 0x18, 0x19, 0x98, 0x19, 0x98, 0x18, 0xD8, 0x18, 0x78, 0x18, 0x78, 0x18, 0x38, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, // N
  0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x1F, 0xF0, 0x18, 0x30, 0x30, 0x18, 0x30, 0x18, 0x30, 0x18, 0x30, 0x18, 0x30, 0x18, 0x30, 0x18, 0x18, 0x30, 0x1F, 0xF0, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, // O

  0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x0F, 0xF0, 0x0C, 0x38, 0x0C, 0x18, 0x0C, 0x38, 0x0F, 0xF0, 0x0F, 0xE0, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, // P
  0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x1F, 0xF0, 0x18, 0x30, 0x30, 0x18, 0x30, 0x18, 0x30, 0x18, 0x30, 0x18, 0x30, 0x18, 0x31, 0xB8, 0x18, 0xF0, 0x1F, 0xF0, 0x07, 0xB0, 0x00, 0x18, 0x00, 0x00, // Q
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x1F, 0xF0, 0x18, 0x38, 0x18, 0x18, 0x18, 0x38, 0x1F, 0xF0, 0x1F, 0xC0, 0x18, 0xE0, 0x18, 0x70, 0x18, 0x30, 0x18, 0x38, 0x18, 0x1C, 0x00, 0x00, 0x00, 0x00, // R
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x07, 0xF0, 0x0E, 0x38, 0x0C, 0x18, 0x0F, 0x00, 0x07, 0xE0, 0x01, 0xF0, 0x00, 0x38, 0x0C, 0x18, 0x0E, 0x38, 0x07, 0xF0, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, // S
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x1F, 0xF8, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, // T
  0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x38, 0x0F, 0xF0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, // U
  0x00, 0x00, 0x00, 0x00, 0x30, 0x18, 0x18, 0x30, 0x18, 0x30, 0x18, 0x30, 0x0C, 0x60, 0x0C, 0x60, 0x0E, 0xE0, 0x06, 0xC0, 0x06, 0xC0, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, // V
  0x00, 0x00, 0x00, 0x00, 0x31, 0xC6, 0x31, 0xC6, 0x31, 0xC6, 0x1B, 0x6C, 0x1B, 0x6C, 0x1B, 0x6C, 0x1B, 0x6C, 0x1B, 0x6C, 0x0E, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x00, 0x00, 0x00, 0x00, // W
  0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x1C, 0x70, 0x0C, 0x60, 0x06, 0xC0, 0x07, 0xC0, 0x03, 0x80, 0x03, 0x80, 0x07, 0xC0, 0x06, 0xC0, 0x0C, 0x60, 0x1C, 0x70, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, // X
  0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x1C, 0x38, 0x0C, 0x30, 0x06, 0x60, 0x06, 0x60, 0x03, 0xC0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, // Y
  0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xF8, 0x00, 0x30, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x01, 0x80, 0x03, 0x80, 0x03, 0x00, 0x06, 0x00, 0x0F, 0xF8, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, // Z
  0x00, 0x00, 0x03, 0xC0, 0x03, 0xC0, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0xC0, 0x03, 0xC0, 0x00, 0x00, // [
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, // <backslash>
  0x00, 0x00, 0x03, 0xC0, 0x03, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x03, 0xC0, 0x03, 0xC0, 0x00, 0x00, // ]
  0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x03, 0xC0, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x0C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ^
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, // _

  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // `
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0xE0, 0x0C, 0x60, 0x01, 0xE0, 0x07, 0xE0, 0x0E, 0x60, 0x0C, 0x60, 0x0F, 0xE0, 0x07, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // a
  0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0D, 0xC0, 0x0F, 0xE0, 0x0E, 0x70, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x0F, 0xE0, 0x0D, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // b
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x0E, 0x60, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0E, 0x60, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // c
  0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x03, 0xB0, 0x07, 0xF0, 0x0E, 0x70, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xF0, 0x03, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // d
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x0C, 0x60, 0x0F, 0xE0, 0x0F, 0xE0, 0x0C, 0x00, 0x0E, 0x60, 0x07, 0xC0, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // e
  0x00, 0x00, 0x03, 0xC0, 0x07, 0xC0, 0x06, 0x00, 0x0F, 0x80, 0x0F, 0x80, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // f
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x60, 0x0F, 0xE0, 0x1C, 0xE0, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x1C, 0xE0, 0x0F, 0xE0, 0x07, 0x60, 0x18, 0x60, 0x1F, 0xE0, 0x0F, 0xC0, 0x00, 0x00, // g
  0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0D, 0xE0, 0x0F, 0xF0, 0x0E, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // h
  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // i
  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x07, 0x80, 0x07, 0x00, // j
  0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x60, 0x0C, 0xC0, 0x0D, 0x80, 0x0F, 0x80, 0x0F, 0xC0, 0x0E, 0xC0, 0x0C, 0xC0, 0x0C, 0x60, 0x0C, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // k
  0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // l
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x38, 0x3F, 0xFC, 0x39, 0xCC, 0x31, 0x8C, 0x31, 0x8C, 0x31, 0x8C, 0x31, 0x8C, 0x31, 0x8C, 0x31, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // m
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0xE0, 0x0F, 0xF0, 0x0E, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // n
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x0E, 0x70, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // o

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0xC0, 0x0F, 0xE0, 0x0E, 0x70, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x0F, 0xE0, 0x0D, 0xC0, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, // p
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xB0, 0x07, 0xF0, 0x0E, 0x70, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xF0, 0x03, 0xB0, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, // q
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x70, 0x03, 0xF0, 0x03, 0x80, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // r
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0xE0, 0x0C, 0x60, 0x0F, 0x00, 0x07, 0xC0, 0x00, 0xE0, 0x0C, 0x60, 0x0F, 0xE0, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // s
  0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x03, 0x00, 0x07, 0xC0, 0x07, 0xC0, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0xC0, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // t
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x70, 0x0F, 0xF0, 0x07, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // u
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x06, 0x30, 0x06, 0x30, 0x03, 0x60, 0x03, 0x60, 0x03, 0x60, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // v
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xC6, 0x31, 0xC6, 0x19, 0xCC, 0x1B, 0x6C, 0x1B, 0x6C, 0x1B, 0x6C, 0x0E, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // w
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x07, 0x70, 0x03, 0x60, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x03, 0x60, 0x07, 0x70, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // x
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x18, 0x0C, 0x18, 0x06, 0x30, 0x06, 0x30, 0x03, 0x60, 0x03, 0x60, 0x03, 0xE0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0x80, 0x07, 0x80, 0x07, 0x00, // y
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x03, 0xF8, 0x00, 0x30, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x01, 0x80, 0x03, 0xF8, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // z
  0x01, 0xC0, 0x03, 0xC0, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0xC0, 0x01, 0xC0, 0x00, 0x00, // {
  0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, // |
  0x03, 0x80, 0x03, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x70, 0x00, 0x70, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x03, 0xC0, 0x03, 0x80, 0x00, 0x00, // }
  0x00, 0x00, 0x00, 0x00, 0x07, 0x88, 0x0F, 0xF8, 0x08, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
};
