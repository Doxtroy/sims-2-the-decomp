/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry021428f4 {
    u8 unk0[0x38];
    s32 unk38;
    s32 unk3C;
    s32 unk40;
} Entry021428f4;

extern Entry021428f4 data_021428f4[];
extern Entry021428f4 data_02142d34[];
extern u8 data_02142848[];

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02117584(void) {
    Entry021428f4 *p = data_021428f4;
    do {
        p->unk38 = 0;
        p->unk3C = 0;
        p->unk40 = 0;
        p++;
    } while (p != data_02142d34);
    *(s32 *) (data_02142848 + 0x61C) = 0;
    *(s32 *) (data_02142848 + 0x620) = 0;
    *(s32 *) (data_02142848 + 0x624) = 0;
    *(s32 *) (data_02142848 + 0x628) = 0;
    *(s32 *) (data_02142848 + 0x62C) = 0;
    *(s32 *) (data_02142848 + 0x630) = 0;
}
