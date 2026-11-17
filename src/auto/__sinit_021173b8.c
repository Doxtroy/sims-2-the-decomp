#include "m2c.h"

extern s32 data_0213e6f4;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_021173b8(void) {
    data_0213e6f4 = 0x100000;
}
