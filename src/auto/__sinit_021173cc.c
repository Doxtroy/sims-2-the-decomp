/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02134fe8 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Unk02134fe8;

extern Unk02134fe8 data_02134fe8;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_021173cc(void) {
    data_02134fe8.unk4 = 0;
    data_02134fe8.unkC = 0x1000;
}
