/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *volatile data_0213e434;

s32 func_02073f8c(s32 a);
u16 func_020c3fc8(s32 a);
s32 func_020445d8(s32 a);
s32 func_0204688c(s32 a, s32 b, s32 c);
s32 func_02014c30(s32 a, s32 b);
void func_020c1eb4(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020444f8(s32 a);
void func_02087b84(void *a);

void func_02087df4(void *arg0) {
    u8 *P;
    u8 *r9;
    s32 idx;
    s32 u;
    s32 r8;
    s32 i;
    s32 t;

    P                             = data_0213e434;
    idx                           = func_02073f8c(*(s32 *) ((u8 *) arg0 + 0xF4));
    *(s32 *) (P + 0x4000 + 0x4D8) = idx;
    idx                           = *(s32 *) (P + 0x4000 + 0x4D8);
    if (idx != -1) {
        r9 = P + 0x41F8 + idx * 0x58;
        u  = func_020c3fc8(idx);
        r8 = func_020445d8(u);
        {
            for (i = 0; i < *(s32 *) (r9 + 0x54); i++) {
                t = func_0204688c(0x214, 0, 4);
                if (t != 0) {
                    t = func_02014c30(t, r9[i * 4]);
                }
                ((s32 *) (P + 0x4000 + 0x4DC))[i] = t;
                func_020c1eb4(t, r9[i * 4 + 1], r9[i * 4 + 2], r9[i * 4 + 3], r8);
            }
        }
        func_020444f8(u);
    }
    P = data_0213e434;
    if (*(u8 *) (P + 0x2000 + 0xF78) != 0) {
        return;
    }
    t = *(s32 *) ((u8 *) arg0 + 0xF4);
    if (t != 3 && t != 0xD) {
        return;
    }
    func_02087b84(arg0);
}
