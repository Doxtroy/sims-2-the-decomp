/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 pad[0xA];
    u8 xa;
    volatile u8 flags;
} A;
typedef struct {
    u8 pad[0xC];
    u32 xc;
} C;
extern A data_021424f8;
extern C data_02142848;
void func_020d43ec(s32);
void func_020d8a70(void);
void func_020d508c(void) {
    if (data_021424f8.flags & 0x20) {
        return;
    }
    data_021424f8.flags |= 0x80;
    func_020d43ec(4);
    {
        u8 f                = data_021424f8.flags;
        data_021424f8.xa    = 0x2A;
        data_021424f8.flags = f & ~1;
    }
    if (!(data_021424f8.flags & 0x80)) {
        return;
    }
    if ((data_021424f8.flags & 0x40) && !(data_02142848.xc & 0xC)) {
        func_020d8a70();
    }
    data_021424f8.flags &= ~0xC0;
}
