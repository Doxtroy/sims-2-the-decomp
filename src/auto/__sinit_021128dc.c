/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139438[];
void func_02112044(void *, s32, s32, void (*)(void), s32);
void func_0203d3a4(void);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_021128dc(void) {
    func_02112044(data_02139438, 2, 0x1D8, func_0203d3a4, 0);
}
