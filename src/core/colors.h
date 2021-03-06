#ifndef _COULORS_H
#define _COULORS_H

#include <raylib.h>

// 10%
#define DUSK \
    CLITERAL(Color) { 0x28, 0x2a, 0x33, 0xff }

// 70%
#define ROCKS_USED_TO_BE_PINK_Y_KNOW \
    CLITERAL(Color) { 0xa1, 0x82, 0x76, 0xff }

#define SOMETHING_GREEN \
    CLITERAL(Color) { 0x70, 0xa2, 0x88, 0xff }

// 80%
#define CREME \
    CLITERAL(Color) { 0xf4, 0xd8, 0xcd, 0xff }

#define PRETTY_IN_PINK \
    CLITERAL(Color) { 0xd5, 0x6a, 0xa0, 0xff }

// 90%
#define FLAMINGO \
    CLITERAL(Color) { 0xF1, 0x51, 0x52, 0xff }

#define RISE_AND_SHINE \
    CLITERAL(Color) { 0xF9, 0xDC, 0x5C, 0xff }

#define BRILLIANT_BLUE \
    CLITERAL(Color) { 0x35, 0x81, 0xb8, 0xff }

// 100%
#define BRIGHT_WHITES \
    CLITERAL(Color) { 0xf3, 0xf8, 0xf2, 0xff }

Color rand_color();

Color rand_tint();

#endif