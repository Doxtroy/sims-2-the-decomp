/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020f5eb8(s32, s32);
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    u8 pad[4];
    s32 x4;
    s32 x8;
} P;
void func_020c2e04(V3 *out, u8 *o, s32 *in) {
    volatile s32 t0, t4, t8, tc, t10, t14, t18, t1c, t20, t24, t28, t2c;
    s32 v;
    out->x = 0;
    out->y = 0;
    out->z = 0;
    t24    = (*(P **) (o + 0x140))->x4;
    t4     = 0x2000;
    t20    = 0x2000;
    v      = func_020f5eb8(in[0], 0x2000);
    v += t24;
    t0     = v;
    t14    = v;
    out->x = v;
    t8     = 0;
    t18    = 0;
    out->y = 0;
    t2c    = (*(P **) (o + 0x140))->x8;
    t10    = 0x2000;
    t28    = 0x2000;
    v      = func_020f5eb8(in[1], 0x2000);
    v += t2c;
    tc     = v;
    t1c    = v;
    out->z = v;
}
