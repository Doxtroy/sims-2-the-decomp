/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0201d56c {
    u8 unk0[0x10];
    u16 ids[2];
    s32 values[2];
    u16 unk1C;
    u8 unk1E;
    u8 unk1F;
    s32 unk20;
} Unk0201d56c;

void func_02018ad0(void *);
void func_02018aa0(void *, s32);

Unk0201d56c *func_0201d56c(Unk0201d56c *obj) {
    s32 i;
    func_02018ad0(obj);
    func_02018aa0(obj, 0x22);
    for (i = 0; i < 2; i++) {
        obj->ids[i]    = 0x14B;
        obj->values[i] = 0;
    }
    obj->unk1C = 0x135;
    obj->unk1E = 0;
    obj->unk20 = 0;
    return obj;
}
