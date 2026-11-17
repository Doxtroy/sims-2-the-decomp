/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e710[];
void func_02112044(void *, s32, s32, void (*)(void), s32);
void func_020b3d90(void);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_021173e8(void) {
    func_02112044(data_0213e710, 6, 0x302, func_020b3d90, 0);
}
