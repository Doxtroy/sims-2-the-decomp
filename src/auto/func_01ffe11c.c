/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fbea0(void);
void func_020fbeb4(s32);

void func_01ffe11c(u32 dmaNo, u32 src, u32 dest, u32 ctrl) {
    s32 e           = func_020fbea0();
    volatile u32 *p = (volatile u32 *) (0x040000B0 + dmaNo * 12);
    *p              = src;
    *(p + 1)        = dest;
    *(p + 2)        = ctrl;
    {
        u32 dummy = *(volatile u32 *) 0x040000B0;
    }
    {
        u32 dummy = *(volatile u32 *) 0x040000B0;
    }
    if (dmaNo == 0) {
        *p       = 0;
        *(p + 1) = 0;
        *(p + 2) = 0x81400001;
    }
    func_020fbeb4(e);
}
