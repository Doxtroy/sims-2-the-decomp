/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct E {
    u16 id;
    u8 pad2[2];
    u8 count;
    u8 flags;
    u8 pad6[6];
} E;
typedef struct Row {
    E e[16];
    u8 pad[4];
} Row;
typedef struct O {
    u32 x0;
    u32 f;
    u8 pad[0xc];
    u32 x14;
} O;
extern s32 data_027e0000;
extern Row data_0213d56c[];
void func_020498dc(O *o) {
    u32 bit = o->f & 0x8000000;
    u32 idx;
    if (bit == 0) {
        return;
    }
    if (bit == 0) {
        return;
    }
    o->f &= ~0x8000000;
    idx = (o->x14 << 16) >> 28;
    if (data_0213d56c[data_027e0000].e[idx].count == 0) {
        return;
    }
    data_0213d56c[data_027e0000].e[idx].count--;
    if (data_0213d56c[data_027e0000].e[idx].count != 0) {
        return;
    }
    if (data_0213d56c[data_027e0000].e[idx].flags & 2) {
        return;
    }
    data_0213d56c[data_027e0000].e[idx].id = 0xff;
}
