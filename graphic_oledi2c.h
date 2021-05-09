#ifndef graphic_oledi2c_h
#define graphic_oledi2c_h

// low battery icon
#define BATTERY_0_3_WIDTH 39
#define BATTERY_0_3_HEIGHT 25
const uint8_t battery_0_3[] PROGMEM = {
   0xf8, 0xff, 0xff, 0x3f, 0x00, 0xfc, 0xff, 0xff, 0x7f, 0x00, 0xfe, 0xff,
   0xff, 0xff, 0x00, 0x0f, 0x00, 0x00, 0xe0, 0x01, 0x07, 0x00, 0x00, 0xc0,
   0x01, 0x07, 0x00, 0x00, 0xc0, 0x01, 0x07, 0x00, 0x00, 0xc0, 0x01, 0x07,
   0x00, 0x00, 0xc0, 0x3f, 0x07, 0x00, 0x00, 0xc0, 0x7f, 0x07, 0x00, 0x00,
   0xc0, 0x7f, 0x07, 0x00, 0x00, 0xc0, 0x71, 0x07, 0x00, 0x00, 0xc0, 0x71,
   0x07, 0x00, 0x00, 0xc0, 0x71, 0x07, 0x00, 0x00, 0xc0, 0x71, 0x07, 0x00,
   0x00, 0xc0, 0x71, 0x07, 0x00, 0x00, 0xc0, 0x7f, 0x07, 0x00, 0x00, 0xc0,
   0x7f, 0x07, 0x00, 0x00, 0xc0, 0x3f, 0x07, 0x00, 0x00, 0xc0, 0x01, 0x07,
   0x00, 0x00, 0xc0, 0x01, 0x07, 0x00, 0x00, 0xc0, 0x01, 0x0f, 0x00, 0x00,
   0xe0, 0x01, 0xfe, 0xff, 0xff, 0xff, 0x00, 0xfc, 0xff, 0xff, 0x7f, 0x00,
   0xf8, 0xff, 0xff, 0x3f, 0x00 };

#define BATTERY_1_3_WIDTH 16
#define BATTERY_1_3_HEIGHT 10
const uint8_t battery_1_3[] PROGMEM = {
   0xfe, 0x1f, 0x03, 0x30, 0x19, 0x20, 0x19, 0xe0, 0x19, 0xa0, 0x19, 0xa0,
   0x19, 0xe0, 0x19, 0x20, 0x03, 0x30, 0xfe, 0x1f };

#define BATTERY_2_3_WIDTH 16
#define BATTERY_2_3_HEIGHT 10
const uint8_t battery_2_3[] PROGMEM = {
   0xfe, 0x1f, 0x03, 0x30, 0xd9, 0x20, 0xd9, 0xe0, 0xd9, 0xa0, 0xd9, 0xa0,
   0xd9, 0xe0, 0xd9, 0x20, 0x03, 0x30, 0xfe, 0x1f };

#define BATTERY_3_3_WIDTH 16
#define BATTERY_3_3_HEIGHT 10
const uint8_t battery_3_3[] PROGMEM = {
   0xfe, 0x1f, 0x03, 0x30, 0xd9, 0x26, 0xd9, 0xe6, 0xd9, 0xa6, 0xd9, 0xa6,
   0xd9, 0xe6, 0xd9, 0x26, 0x03, 0x30, 0xfe, 0x1f };

#endif
