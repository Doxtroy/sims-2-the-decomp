/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Pt {
    s32 x;
    s32 y;
} Pt;
s32 func_020f5eb8(s32, s32);
void func_020154e4(u8 *o, Pt p, s32 n) {
    volatile s32 t[10];
    s32 k;
    s32 q;
    s32 r;
    if (n == 0) {
        return;
    }
    k                   = n << 12;
    t[1]                = k;
    t[7]                = k;
    q                   = *(s32 *) (o + 0x30);
    t[6]                = q;
    r                   = func_020f5eb8(p.x - q, k);
    t[0]                = r;
    t[4]                = r;
    *(s32 *) (o + 0x38) = r;
    t[3]                = k;
    t[9]                = k;
    q                   = *(s32 *) (o + 0x34);
    t[8]                = q;
    r                   = func_020f5eb8(p.y - q, k);
    t[2]                = r;
    t[5]                = r;
    *(s32 *) (o + 0x3c) = r;
    *(u16 *) (o + 0x42) = n;
}
