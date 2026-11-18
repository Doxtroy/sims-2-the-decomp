/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Ent {
    u16 id;
    u8 pad2[2];
    u8 count;
    u8 flags;
    u8 pad6[6];
} Ent;

typedef struct Grp {
    Ent e[16];
    u32 pad;
} Grp;

typedef struct Obj {
    u32 x0;
    u32 flags;
    u8 pad8[0xC];
    u32 lo : 12;
    u32 slot : 4;
    u32 hi : 16;
} Obj;

extern Grp data_0213d56c[];
extern s32 data_027e0000;
void func_02049844(Obj *o) {
    u32 slot;
    if (!(o->flags & 0x08000000)) {
        return;
    }
    o->flags &= ~0x08000000;
    slot = o->slot;
    if (data_0213d56c[data_027e0000].e[slot].count != 0) {
        data_0213d56c[data_027e0000].e[slot].count--;
        if (data_0213d56c[data_027e0000].e[slot].count == 0) {
            if (!(data_0213d56c[data_027e0000].e[slot].flags & 2)) {
                data_0213d56c[data_027e0000].e[slot].id = 0xFF;
            }
        }
    }
}
