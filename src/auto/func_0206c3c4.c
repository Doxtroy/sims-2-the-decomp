/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec2_0206c3c4 {
    s32 x;
    s32 y;
} Vec2_0206c3c4;

typedef struct Unk0206c3c4 {
    s32 unk0;
    u32 flags;
    u16 unk8;
    u16 unkA;
    u8 unkC[0x44];
    Vec2_0206c3c4 target;
    u8 unk58[0x20];
    Vec2_0206c3c4 pos;
    u8 unk80[0x10];
    s32 unk90;
    Vec2_0206c3c4 delta;
} Unk0206c3c4;

s32 func_020d59bc(s32);
void func_0206d6e0(s32, u16);

void func_0206c3c4(Unk0206c3c4 *obj) {
    volatile Vec2_0206c3c4 delta;
    volatile s32 copyY2;
    volatile s32 copyY;
    volatile s32 copyX;
    s32 y;
    s32 x;
    s32 value;
    if ((obj->flags & 1) != 1) {
        return;
    }
    func_020d59bc(0x16A);
    y            = obj->pos.y;
    copyY        = y;
    x            = obj->pos.x;
    copyX        = x;
    value        = obj->target.x - x;
    delta.x      = value;
    delta.y      = obj->target.y - y;
    obj->delta.x = value;
    value        = delta.y;
    copyY2       = value;
    obj->delta.y = value;
    func_0206d6e0(obj->unk90, obj->unkA);
}
