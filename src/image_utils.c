/*
 * image_utils.c
 *
 *  Created on: Jan 15, 2026
 *      Author: amana
 */

#include "image_utils.h"

#define CLAMP(t) (((t) > 255) ? 255 : (((t) < 0) ? 0 : (t)))

#define GET_R_FROM_YUV(y, u, v) ((298 * (y) + 409 * (v) + 128) >> 8)
#define GET_G_FROM_YUV(y, u, v) ((298 * (y) - 100 * (u) - 208 * (v) + 128) >> 8)
#define GET_B_FROM_YUV(y, u, v) ((298 * (y) + 516 * (u) + 128) >> 8)


bool YUV422toRGB888(uint8_t* d, uint8_t* s, uint16_t width, uint16_t height)
{
    int size = width * height;
    for (int i = 0; i < size; i++)
    {
        int y0 = *s++ - 16;
        int u0 = *s++ - 128;
        int y1 = *s++ - 16;
        int v = *s++ - 128;

        // BGR format
        *d++ = CLAMP(GET_B_FROM_YUV(y0, u0, v));
        *d++ = CLAMP(GET_G_FROM_YUV(y0, u0, v));
        *d++ = CLAMP(GET_R_FROM_YUV(y0, u0, v));

        *d++ = CLAMP(GET_B_FROM_YUV(y1, u0, v));
        *d++ = CLAMP(GET_G_FROM_YUV(y1, u0, v));
        *d++ = CLAMP(GET_R_FROM_YUV(y1, u0, v));
    }
    return false;
}
