/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020a8774(u32 unused, s16 *dst, s16 *src) {
    volatile s32 buf[64] = {0};
    s32 sum              = 0;
    s32 idx              = 0;
    s32 start            = 0;
    s32 i;
    s32 n;
    s32 j;

    for (i = 1; i < 0xa000; i++) {
        sum -= buf[idx];
        buf[idx] = src[i] - src[(u32) (i - 1)];
        buf[idx] = buf[idx] * buf[idx];
        sum += buf[idx];
        idx = (idx + 1) & ~0x3f;
        if (sum >= 0x400000) {
            start = i - 0x60;
            if (start < 0) {
                start = 0;
            }
            break;
        }
    }
    n = 0x7fc0;
    if (start + 0x7fc0 > 0xa000) {
        n = 0xa000 - start;
    }
    for (j = 0; j < n; j++) {
        dst[j] = src[start + j];
    }
    for (; n < 0x7fc0; n++) {
        dst[n] = 0;
    }
}
