/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry0213d7b8 {
    u8 unk0[0x10];
    s32 unk10;
    s32 unk14;
    u8 unk18[0x18];
} Entry0213d7b8;

extern Entry0213d7b8 data_0213d7b8[];
extern Entry0213d7b8 data_0213d848[];

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02112afc(void) {
    Entry0213d7b8 *p = data_0213d7b8;
    do {
        p->unk10 = 0x80000000;
        p->unk14 = 0x80000000;
        p++;
    } while (p != data_0213d848);
}
