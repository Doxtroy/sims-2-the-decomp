/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e564;
extern s32 data_0213e560;
extern s32 data_0213e568;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02112f08(void) {
    data_0213e564 = 0x66;
    data_0213e568 = -0x66;
    data_0213e560 = 0x66;
}
