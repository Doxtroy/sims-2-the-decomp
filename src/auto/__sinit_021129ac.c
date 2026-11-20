/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry02139f44 {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u8 unkA;
    u8 unkB;
} Entry02139f44;

extern s32 data_02139f40;
extern Entry02139f44 data_02139f44[];
extern Entry02139f44 data_02139fa4[];

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_021129ac(void) {
    Entry02139f44 *p;
    data_02139f40 = 0;
    p             = data_02139f44;
    do {
        p->unk0 = 0;
        p->unk4 = 0;
        p->unk8 = 0;
        p->unkA = 0;
        p->unkB = 0;
        p++;
    } while (p != data_02139fa4);
}
