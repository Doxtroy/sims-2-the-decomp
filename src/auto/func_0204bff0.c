/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} W;
s32 func_0204688c(s32, s32, s32);
s32 func_0204c5a4(s32, s32, s32, W, s32);

s32 func_0204bff0(s32 a0, s32 a1, s32 a2, W a3, s32 a4) {
    s32 r;
    r = func_0204688c(0x28, 3, 4);
    if (r == 0) {
        return r;
    }
    return func_0204c5a4(r, a1, a2, a3, a4);
}
