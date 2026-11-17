/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02139e90 {
    u8 unk0;
    u8 unk1;
    u8 buffer[8];
} Unk02139e90;

extern Unk02139e90 data_02139e90;
extern Unk02139e90 *data_02139e8c;
void func_02046384(void *, s32, u32);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_0211296c(void) {
    data_02139e90.unk0 = 0;
    data_02139e8c      = &data_02139e90;
    func_02046384(data_02139e90.buffer, 0, 8);
}
