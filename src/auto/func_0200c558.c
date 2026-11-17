/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec3_0200c558 {
    s32 x;
    s32 y;
    s32 z;
} Vec3_0200c558;

typedef struct Unk0200c558 {
    void *vtable;
    Vec3_0200c558 pos;
    s16 unk10;
    u8 unk12;
    s8 unk13;
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 unk17;
    s32 unk18;
} Unk0200c558;

extern u8 data_0212fb88[];
extern u8 data_0212fb6c[];

Unk0200c558 *func_0200c558(Unk0200c558 *obj, Vec3_0200c558 *pos, s32 *arg) {
    volatile Vec3_0200c558 copy;
    s32 value;
    obj->vtable = data_0212fb88;
    value       = pos->x;
    copy.x      = value;
    obj->pos.x  = value;
    value       = pos->y;
    copy.y      = value;
    obj->pos.y  = value;
    value       = pos->z;
    copy.z      = value;
    obj->pos.z  = value;
    obj->unk10  = -1;
    obj->unk12  = 1;
    obj->unk13  = -1;
    obj->unk14  = 0;
    obj->unk15  = 0;
    obj->unk16  = 0;
    obj->vtable = data_0212fb6c;
    obj->unk18  = *arg;
    obj->unk13  = 0;
    return obj;
}
