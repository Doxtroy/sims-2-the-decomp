/* compiler: 1.2/sp2p3 */
#include "m2c.h"
u8 *func_020b3854(u8 *dst, u8 *src) {
    s32 y, x;
    for (y = 0; y < 32; y++) {
        for (x = 0; x < 48; x += 2) {
            s32 b              = *src++;
            dst[x]             = b & 0xF;
            dst[(u32) (x + 1)] = b >> 4;
        }
        dst += 48;
    }
    return src;
}
