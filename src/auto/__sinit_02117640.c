/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_02142eb8;
extern s32 data_02142eb4;
extern s32 data_02142ebc;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02117640(void) {
    data_02142eb8 = 0x3000;
    data_02142eb4 = 0xB33;
    data_02142ebc = 0x1000;
}
