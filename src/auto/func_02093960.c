/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02048108(s32, M2C_UNK, M2C_UNK, s32, s32, s32);
M2C_UNK func_0205871c(s32, s32, M2C_UNK, s32, s32, s32);
s32 func_0208b148();
M2C_UNK func_020d5680(M2C_UNK, s32);
extern s32 data_02124778[];
extern s32 data_02124784[];
extern s32 data_02139fa4;
extern u8 *data_0213e434;

s32 func_02093960(u8 *arg0, s32 arg1) {
    u8 *t;
    s32 c;
    s32 idx;
    s32 cost;
    s32 cur;
    s32 d;
    s32 v;
    s32 g;
    s32 *q;
    t = arg0 + arg1;
    c = t[0x10];
    switch (c) {
        case 0x54:
        case 0x55:
        case 0x56: {
            g    = (s32) data_0213e434;
            idx  = c - 0x54;
            cost = data_02124784[idx];
            cur  = *(s32 *) (g + 0x2000 + 0xf60);
            q    = (s32 *) (g + 0x2f60);
            if (cur < cost) {
                func_0205871c(data_02139fa4, 0x139, -1, 0, 0, 1);
                return 0;
            }
            d  = -cost;
            *q = cur + d;
            v  = *q;
            if (v > 0xf423f) {
                *q = 0xf423f;
            } else if (v < 0) {
                *q = 0;
            }
            if (d > 0) {
                *((u8 *) q + 0xc) = 1;
                q[1]              = q[1] + d;
                v                 = q[1];
                if (v > 0xf423f || v < 0) {
                    q[1] = 0xf423f;
                }
            } else {
                q[2] = q[2] - d;
                v    = q[2];
                if (v > 0xf423f || v < 0) {
                    q[2] = 0xf423f;
                }
            }
            func_020d5680(0xfc, *(s32 *) (arg0 + 4) + 0x78);
            func_02048108(data_02139fa4, 0x11, 1, idx, *(s32 *) (arg0 + 4), data_02124778[idx]);
            return 2;
        }
        default:
            return func_0208b148(arg0, arg1);
    }
}
