/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec2_020347e8 {
    s32 x;
    s32 y;
} Vec2_020347e8;

typedef struct Child020347e8 {
    s32 unk0[5];
    s32 unk14;
} Child020347e8;

typedef struct Unk020347e8 {
    s32 unk0;
    Child020347e8 *child;
    u8 unk8[0x70];
    u16 unk78;
} Unk020347e8;

extern u32 *data_0213e434;
void func_02033370(void *);
void func_02031c2c(void *);

void func_020347e8(Unk020347e8 *obj) {
    if (!(*data_0213e434 & 0x80)) {
        func_02033370(obj);
    } else {
        volatile Vec2_020347e8 zero;
        zero.x            = 0;
        zero.y            = 0;
        obj->child->unk14 = 0;
    }
    if (obj->unk78 == 0) {
        return;
    }
    func_02031c2c(obj);
}
