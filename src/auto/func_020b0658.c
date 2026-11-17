/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Fx {
    s32 v;
} Fx;
s32 func_020f5eb8(s32, s32);
void func_02072d00(void *, Fx, s32);
void func_020b0658(u8 *o, Fx a, s32 flag) {
    Fx r[2];
    volatile s32 d[2];
    if (flag != 0) {
        *(s32 *) (o + 0xdc) += a.v;
        d[0]   = *(s32 *) (o + 0xe0);
        r[0].v = func_020f5eb8(*(s32 *) (o + 0xdc), *(s32 *) (o + 0xe0));
        func_02072d00(o + 0x9c, r[0], 1);
    } else {
        *(s32 *) (o + 0xd4) += a.v;
        d[1]   = *(s32 *) (o + 0xd8);
        r[1].v = func_020f5eb8(*(s32 *) (o + 0xd4), *(s32 *) (o + 0xd8));
        func_02072d00(*(void **) (o + 0x98), r[1], 1);
    }
}
