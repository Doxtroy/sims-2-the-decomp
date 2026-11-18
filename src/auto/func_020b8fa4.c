/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Bits {
    u8 pad[0xc];
    u32 words[1];
} Bits;
typedef struct Inner {
    u8 pad[8];
    Bits *bits;
} Inner;
typedef struct Obj {
    u8 pad[0x1c];
    Inner *inner;
    u8 pad20[0xac - 0x20];
    u16 f0 : 5;
    u16 flag : 1;
    u16 f6 : 10;
} Obj;
void func_020b8fa4(Obj *obj, u32 bit, s32 set) {
    Bits *b;
    u32 idx;
    u32 mask;
    if (obj->flag != 1) {
        return;
    }
    b = obj->inner->bits;
    if (b == NULL) {
        return;
    }
    idx  = bit >> 5;
    mask = 1 << (bit & 0x1f);
    if (!set) {
        b->words[idx] &= ~mask;
    } else {
        b->words[idx] |= mask;
    }
}
