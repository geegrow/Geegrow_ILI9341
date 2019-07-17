/*!
 * @file Geegrow_ILI9341_libLettersCyrillic.h
 *
 * This is an addon library for the Geegrow ILI9341 TFT 240x320 display,
 * which implements bitmaps of cyrillic letters
 * https://www.geegrow.ru
 *
 * @section author Author
 * Written by Anton Pomazanov
 *
 * @section license License
 * BSD license, all text here must be included in any redistribution.
 *
 */

#ifndef Geegrow_ILI9341_LIBLETTERS_CYRILLIC_H
#define Geegrow_ILI9341_LIBLETTERS_CYRILLIC_H

#include <Arduino.h>
#include <avr/pgmspace.h>
#include <Geegrow_ILI9341_defines.h>

/**************************************************************************/
/*!
    @brief    Class that stores state and functions for implementing bitmaps
              of cyrillic letters
*/
/**************************************************************************/
class Geegrow_ILI9341_libLettersCyrillic{
    public:
        Geegrow_ILI9341_libLettersCyrillic(){}
        ~Geegrow_ILI9341_libLettersCyrillic(){}
        uint16_t* getBitMap(char _char, uint8_t _encoding);
};

/**************************************************************************/
/*!
    @brief    Bitmaps of cyrillic letters
*/
/**************************************************************************/
const uint16_t fontLibLettersCyrillic[] PROGMEM = {
    0x0FF8, 0x0FFC, 0x0086, 0x0082, 0x0086, 0x0FFC, 0x0FF8, 0x0000,        // А (A)
    0x0FFE, 0x0FFE, 0x0822, 0x0822, 0x0822, 0x0FE2, 0x07C2, 0x0000,        // Б (B)
    0x0000, 0x0FFE, 0x0FFE, 0x0822, 0x0822, 0x0FFE, 0x07DC, 0x0000,        // В (V)
    0x0FFE, 0x0FFE, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0000,        // Г (G)
    0x3000, 0x1FFC, 0x1FFE, 0x1002, 0x1FFE, 0x1FFE, 0x3000, 0x0000,        // Д (D)
    0x0000, 0x0FFE, 0x0FFE, 0x0842, 0x08E2, 0x0C06, 0x0E0E, 0x0000,        // Е (YE)
    0x0F0E, 0x0F9E, 0x00F0, 0x0FFE, 0x00F0, 0x0F9E, 0x0F0E, 0x0000,        // Ж (ZH)
    0x060C, 0x0E0E, 0x0842, 0x0842, 0x0842, 0x0FFE, 0x07BC, 0x0000,        // З (Z)
    0x0FFE, 0x0FFE, 0x0E00, 0x0380, 0x00E0, 0x0FFE, 0x0FFE, 0x0000,        // И (I)
    0x0FFE, 0x0FFE, 0x0E00, 0x0381, 0x00E0, 0x0FFE, 0x0FFE, 0x0000,        // Й (IY)
    0x0000, 0x0FFE, 0x0FFE, 0x0040, 0x00E0, 0x0FBE, 0x0F1E, 0x0000,        // К (K)
    0x0C00, 0x0FFC, 0x07FE, 0x0002, 0x0002, 0x0FFE, 0x0FFE, 0x0000,        // Л (L)
    0x0FFE, 0x0FFC, 0x0038, 0x0070, 0x0038, 0x0FFC, 0x0FFE, 0x0000,        // М (M)
    0x0FFE, 0x0FFE, 0x0040, 0x0040, 0x0040, 0x0FFE, 0x0FFE, 0x0000,        // Н (N)
    0x07FC, 0x0FFE, 0x0802, 0x0802, 0x0802, 0x0FFE, 0x07FC, 0x0000,        // О (O)
    0x0FFE, 0x0FFE, 0x0002, 0x0002, 0x0002, 0x0FFE, 0x0FFE, 0x0000,        // П (P)
    0x0000, 0x0FFE, 0x0FFE, 0x0042, 0x0042, 0x007E, 0x003C, 0x0000,        // Р (R)
    0x07FC, 0x0FFE, 0x0802, 0x0802, 0x0802, 0x0E0E, 0x060C, 0x0000,        // С (S)
    0x0000, 0x0006, 0x0006, 0x0FFE, 0x0FFE, 0x0006, 0x0006, 0x0000,        // Т (T)
    0x00FE, 0x09FE, 0x0900, 0x0900, 0x0900, 0x0FFE, 0x07FE, 0x0000,        // У (U)
    0x01FC, 0x03FE, 0x0A02, 0x0FFE, 0x0A02, 0x03FE, 0x01FC, 0x0000,        // Ф (F)
    0x0C06, 0x0F1E, 0x03B8, 0x00F0, 0x03B8, 0x0F1E, 0x0C06, 0x0000,        // Х (H)
    0x0FFE, 0x0FFE, 0x0800, 0x0800, 0x0800, 0x0FFE, 0x0FFE, 0x1800,        // Ц (C)
    0x003E, 0x007E, 0x0040, 0x0040, 0x0040, 0x0FFE, 0x0FFE, 0x0000,        // Ч (CH)
    0x0FFE, 0x0FFE, 0x0800, 0x0FFE, 0x0800, 0x0FFE, 0x0FFE, 0x0000,        // Ш (SH)
    0x0FFE, 0x0FFE, 0x0800, 0x0FFE, 0x0800, 0x0FFE, 0x0FFE, 0x1800,        // Щ (soft SH)
    0x0006, 0x0FFE, 0x0FFE, 0x0840, 0x0840, 0x0FC0, 0x0780, 0x0000,        // Ъ (hard sign)
    0x0FFE, 0x0FFE, 0x0840, 0x0F80, 0x0000, 0x0FFE, 0x0FFE, 0x0000,        // Ы (hard i)
    0x0000, 0x0FFE, 0x0FFE, 0x0840, 0x0840, 0x0FC0, 0x0780, 0x0000,        // Ь (soft sign)
    0x0802, 0x0842, 0x0842, 0x0842, 0x0842, 0x0FFE, 0x07FC, 0x0000,        // Э (hard e)
    0x0FFE, 0x0FFE, 0x0040, 0x07FC, 0x0802, 0x0802, 0x07FC, 0x0000,        // Ю (YU)
    0x083C, 0x0C7E, 0x0642, 0x0342, 0x01C2, 0x0FFE, 0x0FFE, 0x0000,        // Я (YA)

    0x0700, 0x0FA0, 0x08A0, 0x08A0, 0x07E0, 0x0FC0, 0x0800, 0x0000,        // а (a)
    0x07F8, 0x0FFC, 0x0824, 0x0824, 0x0824, 0x0FE6, 0x07C2, 0x0000,        // б (b)
    0x0FE0, 0x0FE0, 0x0920, 0x0920, 0x0920, 0x0FE0, 0x06C0, 0x0000,        // в (v)
    0x0FE0, 0x0FE0, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0000,        // г (g)
    0x3000, 0x1FC0, 0x1FE0, 0x1020, 0x1FE0, 0x1FE0, 0x3000, 0x0000,        // д (d)
    0x07C0, 0x0FE0, 0x0920, 0x0920, 0x0920, 0x0DE0, 0x05C0, 0x0000,        // е (e)
    0x0C60, 0x0EE0, 0x0380, 0x0FE0, 0x0380, 0x0EE0, 0x0C60, 0x0000,        // ж (zh)
    0x0440, 0x0C60, 0x0920, 0x0920, 0x0920, 0x0FE0, 0x06C0, 0x0000,        // з (z)
    0x07E0, 0x0FE0, 0x0C00, 0x0600, 0x0300, 0x0FE0, 0x0FE0, 0x0000,        // и (i)
    0x07E0, 0x0FE0, 0x0C00, 0x0610, 0x0300, 0x0FE0, 0x0FE0, 0x0000,        // й (iy)
    0x0FE0, 0x0FE0, 0x0380, 0x06C0, 0x0C60, 0x0820, 0x0000, 0x0000,        // к (k)
    0x0800, 0x0FC0, 0x07E0, 0x0020, 0x0020, 0x0FE0, 0x0FE0, 0x0000,        // л (l)
    0x0FE0, 0x0FE0, 0x01C0, 0x0380, 0x01C0, 0x0FE0, 0x0FE0, 0x0000,        // м (m)
    0x0FE0, 0x0FE0, 0x0100, 0x0100, 0x0100, 0x0FE0, 0x0FE0, 0x0000,        // н (n)
    0x07C0, 0x0FE0, 0x0820, 0x0820, 0x0820, 0x0FE0, 0x07C0, 0x0000,        // о (o)
    0x0FE0, 0x0FE0, 0x0020, 0x0020, 0x0020, 0x0FE0, 0x0FE0, 0x0000,        // п (p)
    0x0000, 0x7FE0, 0x7FE0, 0x0820, 0x0820, 0x0FE0, 0x07C0, 0x0000,        // р (r)
    0x07C0, 0x0FE0, 0x0820, 0x0820, 0x0820, 0x0C60, 0x0440, 0x0000,        // с (s)
    0x0000, 0x0020, 0x0020, 0x0FE0, 0x0FE0, 0x0020, 0x0020, 0x0000,        // т (t)
    0x07E0, 0x2FE0, 0x2800, 0x2800, 0x2800, 0x3FE0, 0x1FE0, 0x0000,        // у (u)
    0x07C0, 0x0FE0, 0x0820, 0x3FE0, 0x0820, 0x0FE0, 0x07C0, 0x0000,        // ф (f)
    0x0C60, 0x0EE0, 0x0280, 0x0100, 0x0280, 0x0EE0, 0x0C60, 0x0000,        // х (h)
    0x0FE0, 0x0FE0, 0x0800, 0x0800, 0x0800, 0x0FE0, 0x0FE0, 0x1800,        // ц (c)
    0x00E0, 0x01E0, 0x0100, 0x0100, 0x0100, 0x0FE0, 0x0FE0, 0x0000,        // ч (ch)
    0x0FE0, 0x0FE0, 0x0800, 0x0FE0, 0x0800, 0x0FE0, 0x0FE0, 0x0000,        // ш (sh)
    0x0FE0, 0x0FE0, 0x0800, 0x0FE0, 0x0800, 0x0FE0, 0x0FE0, 0x1800,        // щ (soft sh)
    0x0020, 0x0FE0, 0x0FE0, 0x0900, 0x0F00, 0x0600, 0x0000, 0x0000,        // ъ (hard sign)
    0x0FE0, 0x0FE0, 0x0900, 0x0E00, 0x0000, 0x0FE0, 0x0FE0, 0x0000,        // ы (hard i)
    0x0000, 0x0FE0, 0x0FE0, 0x0900, 0x0F00, 0x0600, 0x0000, 0x0000,        // ь (soft sign)
    0x0820, 0x0920, 0x0920, 0x0920, 0x0920, 0x0FE0, 0x07C0, 0x0000,        // э (hard e)
    0x0FE0, 0x0FE0, 0x0100, 0x07C0, 0x0820, 0x0820, 0x07C0, 0x0000,        // ю (yu)
    0x0000, 0x08C0, 0x0DE0, 0x0720, 0x0320, 0x0FE0, 0x0FE0, 0x0000         // я (ya)
};

#endif /* Geegrow_ILI9341_LIBLETTERS_CYRILLIC_H */