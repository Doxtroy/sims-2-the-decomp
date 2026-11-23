/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_02088218(s32);
s32 func_020644b8(s32);
s32 func_020b8a9c(void *, u8, s32, s32);
void func_020f0d74(void *, u32, u32);
extern s32 data_0213e434;

static inline void *GetMdl(u8 *set) {
    return set + *(s32 *) (set + *(u16 *) (set + 0xe) + 0xc);
}

void func_020844c4(u8 *o) {
    s32 id;
    if (func_02088218(*(s32 *) (o + 4)) != 0xFFFF) {
        id = func_02088218(*(s32 *) (o + 4));
        func_020b8a9c(*(void **) (o + 0x24), id & 0xff, id >> 8, func_020644b8(data_0213e434));
        return;
    }
    if (func_020644b8(data_0213e434) != 0) {
        return;
    }
    if (*(s32 *) (o + 4) == 20) {
        func_020f0d74(GetMdl(*(u8 **) (*(u8 **) (o + 0xc) + 0x1a8)), 10, 0);
    } else if (*(s32 *) (o + 4) == 2) {
        func_020f0d74(GetMdl(*(u8 **) (*(u8 **) (o + 0xc) + 0x1a8)), 13, 0);
    }
}
