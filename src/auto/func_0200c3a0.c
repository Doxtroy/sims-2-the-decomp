/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec3_0200c3a0 {
    s32 x;
    s32 y;
    s32 z;
} Vec3_0200c3a0;

typedef struct Unk0200c3a0 {
    void *vtable;
    Vec3_0200c3a0 pos;
    s16 unk10;
    u8 unk12;
    s8 unk13;
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 unk17;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    Vec3_0200c3a0 unk24;
} Unk0200c3a0;

extern u8 data_0212fb88[];
extern u8 data_0212fba4[];

Unk0200c3a0 *func_0200c3a0(Unk0200c3a0 *obj) {
    volatile Vec3_0200c3a0 copy1;
    volatile Vec3_0200c3a0 copy2;
    obj->vtable  = data_0212fb88;
    obj->pos.x   = 0;
    obj->pos.y   = 0;
    obj->pos.z   = 0;
    obj->unk10   = -1;
    obj->unk12   = 1;
    obj->unk13   = -1;
    obj->unk14   = 0;
    obj->unk15   = 0;
    obj->unk16   = 0;
    obj->vtable  = data_0212fba4;
    obj->unk18   = 0;
    obj->unk1C   = 0;
    obj->unk20   = 0;
    copy1.x      = 0;
    copy2.x      = 0;
    obj->unk24.x = 0;
    copy1.y      = 0;
    copy2.y      = 0;
    obj->unk24.y = 0;
    copy1.z      = 0;
    copy2.z      = 0;
    obj->unk24.z = 0;
    obj->unk13   = 4;
    return obj;
}
