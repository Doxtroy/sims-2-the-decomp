/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct UnkA0206c73c {
    u8 unk0[8];
    s32 unk8;
} UnkA0206c73c;

typedef struct UnkB0206c73c {
    u8 unk0[0x10];
    s16 unk10;
} UnkB0206c73c;

typedef struct Unk0206c73c {
    u8 unk0[0x40];
    UnkA0206c73c *a[6];
    UnkB0206c73c *b[6];
    u8 unk70[4];
    s32 selected;
} Unk0206c73c;

extern u8 *data_0213e434;
void func_02083d60(void *, s32);
void func_0206c5bc(void *);

void func_0206c73c(Unk0206c73c *obj) {
    s32 index = obj->selected;
    if (index < 0) {
        return;
    }
    if (obj->a[index]->unk8 < 0) {
        return;
    }
    if (obj->b[index]->unk10 < 0) {
        return;
    }
    func_02083d60(data_0213e434 + 0x18, index);
    func_0206c5bc(obj);
}
