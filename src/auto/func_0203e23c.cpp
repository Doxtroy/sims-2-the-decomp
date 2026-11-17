/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8Quad;
u16 func_0203d020(void);
s32 func_0203ba20(s32, s32);
s32 func_0203b9e0(s32, s32);
s32 func_0203d2e0(s32);
s32 func_0203cf38(void);
U16One func_0203d130(s32);
U16Pair func_0203de9c(U16One, s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
U16Pair func_0203e23c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, U16Pair p, U8Quad q, s32 flags) {
    U16Pair r;
    if (func_0203ba20(func_0203d020(), a)) {
        flags |= 0x80;
    } else if (func_0203b9e0(func_0203d020(), a)) {
        flags |= 0x10;
    }
    if (func_0203d2e0(a)) {
        flags |= 0x20;
        if (!(flags & 0x10) && func_0203cf38()) {
            flags |= 0x40;
        }
    }
    r = func_0203de9c(func_0203d130(a), b, c, a, d, e, f, p, q, flags);
    return r;
}
}
