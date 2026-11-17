/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0204688c(s32, s32, s32);
void *func_0204a478(void *, void *, void *, s32);

void func_020830a0(u8 **out, s32 *src) {
    u16 id;
    s32 params[3];
    u8 *p;
    params[0] = 0;
    params[1] = 0;
    params[2] = 0;
    id        = 0x1D91;
    p         = func_0204688c(0x1D4, 3, 4);
    if (p != NULL) {
        p = func_0204a478(p, params, &id, 1);
    }
    *out                 = p;
    p                    = *out;
    *(s32 *) (p + 0x1D0) = src[0];
    *(s32 *) (p + 0x44)  = src[1];
}
