/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0203b7b8(s32, s32, u16 *);
u16 func_0204dae8(s32 src, s32 size) {
    u16 buf[0x200];
    u16 sum    = 0;
    s32 blocks = (size - 1) / 0x400 + 1;
    size >>= 1;
    while (blocks--) {
        s32 j;
        u16 *p;
        func_0203b7b8(src, 0x400, buf);
        j = 0x200;
        p = buf;
        while (j-- && size--) {
            sum += *p++;
        }
        src += 0x400;
    }
    return -sum;
}
