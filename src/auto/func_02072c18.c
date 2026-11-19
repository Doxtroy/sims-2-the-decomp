/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02072530(void *);

struct UnkStruct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

void func_02072c18(struct UnkStruct *r4) {
    volatile s32 sp_00;
    volatile s32 sp_04;
    volatile s32 sp_08;
    volatile s32 sp_0c;
    volatile s32 sp_10;
    volatile s32 sp_14;
    volatile s32 sp_18;
    volatile s32 sp_1c;
    volatile s32 sp_20;
    volatile s32 sp_24;
    volatile s32 sp_28;
    volatile s32 sp_2c;
    volatile s32 sp_30;

    sp_2c = r4->unk_0c;
    sp_08 = r4->unk_0c;

    if (r4->unk_10 < r4->unk_0c) {
        sp_00 = 0x2000;
        sp_0c = 0x2000;
        r4->unk_10 += 0x2000;
        sp_28 = r4->unk_0c;
        sp_10 = r4->unk_0c;
        if (r4->unk_10 > r4->unk_0c) {
            sp_14      = r4->unk_0c;
            r4->unk_10 = r4->unk_0c;
        }
        r4->unk_08 |= 0x1;
    } else {
        sp_18 = r4->unk_0c;
        if (r4->unk_10 > r4->unk_0c) {
            sp_04 = 0x2000;
            sp_1c = 0x2000;
            r4->unk_10 -= 0x2000;
            sp_30 = r4->unk_0c;
            sp_20 = r4->unk_0c;
            if (r4->unk_10 < r4->unk_0c) {
                sp_24      = r4->unk_0c;
                r4->unk_10 = r4->unk_0c;
            }
            r4->unk_08 |= 0x1;
        }
    }

    if ((r4->unk_08 & 0x1) == 0) {
        return;
    }

    func_02072530(r4);
    r4->unk_08 &= ~0x1;
}
