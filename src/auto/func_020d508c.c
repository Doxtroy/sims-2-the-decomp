/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern volatile u8 data_021424f8[];
extern volatile s32 data_02142848[];
extern void func_020d43ec(s32);
extern void func_020d8a70(s32);

s32 func_020d508c(void) {
    s32 t;
    t = data_021424f8[0xB] & 0x20;
    if (t != 0) {
        return t;
    }
    data_021424f8[0xB] = (u8) (data_021424f8[0xB] | 0x80);
    func_020d43ec(4);
    {
        u8 x               = data_021424f8[0xB];
        data_021424f8[0xA] = 0x2A;
        data_021424f8[0xB] = (u8) (x & ~1);
    }
    if (!(data_021424f8[0xB] & 0x80)) {
        return (s32) data_021424f8;
    }
    if (data_021424f8[0xB] & 0x40) {
        t = data_02142848[3] & 0xC;
        if (t == 0) {
            func_020d8a70(t);
        }
    }
    data_021424f8[0xB] = (u8) (data_021424f8[0xB] & ~0xC0);
    return (s32) data_021424f8;
}
