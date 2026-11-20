/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 x;
    u8 y;
    u8 w;
    u8 h;
} Rect8;

typedef struct {
    s16 x;
    s16 y;
} Pos16;

extern u16 func_0203d020(void);

void func_0203db78(u16 *src, s32 srcStride, u16 *dst, s32 shift, Rect8 r, Pos16 p, s32 add, s32 pal) {
    s32 stride;
    s32 i;
    s32 j;
    u16 *d;
    u16 *s;

    func_0203d020();
    stride = 0x10 << shift;
    d      = dst + p.y * stride + p.x;
    s      = src + r.y * srcStride + r.x;
    for (i = r.h; i > 0; i--) {
        for (j = r.w; j > 0; j--) {
            *d++ = *s + (pal << 12) + add;
            s++;
        }
        d += stride - r.w;
        s += srcStride - r.w;
    }
}
