/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec2_0206c234 {
    s32 x;
    s32 y;
} Vec2_0206c234;

typedef struct Unk0206c234 {
    s32 unk0;
    u32 flags;
    u16 unk8;
    u16 unkA;
    u8 unkC[0x44];
    Vec2_0206c234 pos;
    u8 unk58[0x28];
    Vec2_0206c234 base;
    u8 unk88[8];
    s32 unk90;
    Vec2_0206c234 offset;
} Unk0206c234;

extern u8 *data_0213e434;
s32 func_02066728(u8 *);
void func_0206cbf4(s32);

void func_0206c234(Unk0206c234 *obj) {
    volatile Vec2_0206c234 sum;
    volatile s32 copyY2;
    volatile s32 copyY;
    volatile s32 copyX;
    s32 y;
    s32 x;
    s32 value;
    if (func_02066728(*(u8 **) (data_0213e434 + obj->unkA * 4 + 0x4670)) == 0) {
        return;
    }
    y          = obj->offset.y;
    copyY      = y;
    x          = obj->offset.x;
    copyX      = x;
    value      = obj->base.x + x;
    sum.x      = value;
    sum.y      = obj->base.y + y;
    obj->pos.x = value;
    value      = sum.y;
    copyY2     = value;
    obj->pos.y = value;
    func_0206cbf4(obj->unk90);
}
