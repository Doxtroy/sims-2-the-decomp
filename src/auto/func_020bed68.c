/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020bf658(void *, s32);
void func_020bf818(void *);
void func_020bf8f0(void *);

void func_020bed68(void *arg0) {
    volatile s32 sp0;
    volatile s32 sp4;
    volatile s32 sp8;
    volatile s32 spC;
    volatile s32 sp10;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 t;
    s32 n;
    u8 *o = (u8 *) arg0;

    if (o[0x16d] == 0) {
        return;
    }
    if (o[0x16e] == 0) {
        return;
    }
    if (o[0x16f] == 0) {
        return;
    }
    if (o[0x16b] != 0) {
        c                   = *(s32 *) (o + 0x148);
        spC                 = c;
        d                   = *(s32 *) (o + 0x144);
        sp10                = d;
        a                   = *(s32 *) (o + 0x80) + d;
        sp0                 = a;
        b                   = *(s32 *) (o + 0x84) + c;
        sp4                 = b;
        *(s32 *) (o + 0x50) = a;
        t                   = sp4;
        sp8                 = t;
        *(s32 *) (o + 0x54) = t;
        n                   = (*(s32 *) (o + 0x164))--;
        if (n == 0) {
            func_020bf658(arg0, 0);
        }
        return;
    }
    if ((o[0x169] != 0 && o[0x16a] == 0) || (o[0x169] == 0 && o[0x16a] != 0)) {
        func_020bf818(arg0);
        return;
    }
    func_020bf8f0(arg0);
}
