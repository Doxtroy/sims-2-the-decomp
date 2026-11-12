/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c;
} S12;

extern volatile u8 data_021424f8[];
extern u8 data_02142848[];

void func_020d871c(S12 s);
void func_020d8a70(void);

void func_020d5cb8(S12 s, s32 d) {
    u32 f;

    data_021424f8[0xB] |= 0x80;
    func_020d871c(s);
    f = data_021424f8[0xB] & 0x80;
    if (!f) {
        return;
    }
    if (data_021424f8[0xB] & 0x40) {
        if ((*(u32 *) (data_02142848 + 0xC) & 0xC) == 0) {
            func_020d8a70();
        }
    }
    data_021424f8[0xB] &= ~0xC0;
}
