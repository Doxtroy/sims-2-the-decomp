/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139fb4[];
extern u8 data_02139fa8[];
void func_020bbb74(void *);
void func_020bbb58(void);
void func_02111e88(void *, void *, void *);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_021129f0(void) {
    func_020bbb74(data_02139fb4);
    func_02111e88(data_02139fb4, func_020bbb58, data_02139fa8);
}
