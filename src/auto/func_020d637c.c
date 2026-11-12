/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021424f8;
extern u8 data_02142848;
extern s32 data_021287c4;

void func_02046384(void *, s32, s32);
void func_020d907c(void);
void func_020de798(s32, s32);
void func_020d8828(s32);
void func_020d8a70(void);
void func_020d4d08(s32);
void func_020d8ea0(void);

void func_020d637c(void) {
    u8 r4;

    func_02046384(&data_021424f8, 0, 0xC);
    ((volatile u8 *) &data_021424f8)[9] = 0x20;
    func_020d907c();
    func_020de798(0x20DAFA0, 0x40030);
    r4                                    = ((volatile u8 *) &data_021424f8)[9];
    ((volatile u8 *) &data_021424f8)[0xB] = ((volatile u8 *) &data_021424f8)[0xB] | 0x80;
    func_020d8828(r4);
    if (((volatile u8 *) &data_021424f8)[0xB] & 0x80) {
        if (((volatile u8 *) &data_021424f8)[0xB] & 0x40) {
            if (!(*(volatile s32 *) (&data_02142848 + 0xC) & 0xC)) {
                func_020d8a70();
            }
        }
        ((volatile u8 *) &data_021424f8)[0xB] = ((volatile u8 *) &data_021424f8)[0xB] & ~0xC0;
    }
    {
        u8 t;
        u8 *p                                 = &data_021424f8;
        ((volatile u8 *) &data_021424f8)[0xB] = 0;
        t                                     = ((volatile u8 *) &data_021424f8)[0xB];
        p[9]                                  = r4;
        p[0xA]                                = 0xFF;
        p[0xB]                                = t | 0x80;
        func_020d4d08(data_021287c4);
    }
    if (((volatile u8 *) &data_021424f8)[0xB] & 0x80) {
        if (((volatile u8 *) &data_021424f8)[0xB] & 0x40) {
            if (!(*(volatile s32 *) (&data_02142848 + 0xC) & 0xC)) {
                func_020d8a70();
            }
        }
        ((volatile u8 *) &data_021424f8)[0xB] = ((volatile u8 *) &data_021424f8)[0xB] & ~0xC0;
    }
    ((volatile u8 *) &data_021424f8)[0] = 1;
    if (((volatile u8 *) &data_021424f8)[0] != 1) {
        return;
    }
    ((volatile u8 *) &data_021424f8)[0xB] = ((volatile u8 *) &data_021424f8)[0xB] | 0x80;
    func_020d8ea0();
    ((volatile u8 *) &data_021424f8)[0xB] = ((volatile u8 *) &data_021424f8)[0xB] & ~0xC0;
}
