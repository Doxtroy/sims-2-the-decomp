/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_02121de4[];
extern s32 data_02121dd8[];
extern s32 data_0211fb08[];
extern s32 data_0213e434;

void func_02083bf0(u8 *arg0, s32 arg1) {
    s32 cnt;
    s32 n;
    s32 *q;
    s32 v;
    volatile s32 sp0;
    volatile s32 sp4;

    if (arg1 != data_02121de4[*(s32 *) (arg0 + 0x50)]) {
        return;
    }
    if (*(s32 *) (arg0 + 0x54) >= 3) {
        return;
    }
    *(s32 *) (arg0 + 0x58) = *(s32 *) (arg0 + 0x58) + 1;
    n                      = *(s32 *) (arg0 + 0x54);
    cnt                    = *(s32 *) (arg0 + 0x58);
    if (cnt <= data_02121dd8[n]) {
        return;
    }
    *(s32 *) (arg0 + 0x54) = *(s32 *) (arg0 + 0x54) + 1;
    *(s32 *) (arg0 + 0x58) = 0;
    q                      = (s32 *) ((u8 *) data_0213e434 + 0x2164);
    v                      = q[2] + 1;
    if (v >= 4) {
        return;
    }
    q[2] = v;
    v    = data_0211fb08[q[2]] << 12;
    sp0  = v;
    sp4  = v;
    q[1] = v;
}
