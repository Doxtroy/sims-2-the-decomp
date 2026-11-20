/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0213e580;
s32 func_020523dc(s32 *, s32);
void *func_0201e774(void *);
void func_020117d8(s32, s32, void *, s32);
void func_02018acc(void *);
s32 func_01ffaf28(s32, s32, s32);
void func_01ffabc8(s32, s32, s32);

typedef struct {
    s32 w[8];
} Buf;

void func_020418b4(s32 arg0, u8 *arg1) {
    s32 r4;
    Buf buf;
    u8 b0 = arg1[0];
    u8 b1 = arg1[1];

    if (b0 == 0xff) {
        r4 = *(s32 *) (data_0213e580 + 0xf8);
    } else {
        s32 base = *(s32 *) (*(s32 *) (arg0 + 4) + 0x28);
        r4       = func_020523dc((s32 *) (base + (b0 << 3)), b1);
    }

    if (r4 == 0) {
        return;
    }

    if (func_01ffaf28(r4 + 0xe0, 0x18, 0) != 0) {
        func_01ffabc8(r4 + 0xe0, 0x18, 1);
    }

    if (*(u16 *) (r4 + 0xc) != 2) {
        return;
    }

    if (func_01ffaf28(r4 + 0xe0, 5, 0) != 0) {
        return;
    }

    func_0201e774(&buf);
    func_020117d8(r4, 5, &buf, 0);
    func_02018acc(&buf);
}
