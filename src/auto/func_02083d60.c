/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02083d60 {
    u8 unk0[0x10];
    u16 items[0x1098];
    u8 unk2140;
    u8 dirty;
    u8 unk2142[2];
    s32 count;
} Unk02083d60;

void func_02083d60(Unk02083d60 *obj, s32 index) {
    while (index < obj->count - 1) {
        s32 next          = index + 1;
        obj->items[index] = obj->items[next];
        index             = next;
    }
    obj->count--;
    obj->dirty = 1;
}
