#include "m2c.h"

extern s32 data_02142eb0;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_0211762c(void) {
    data_02142eb0 = 0x400;
}
