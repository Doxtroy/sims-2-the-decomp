/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0204198c_B {
    u8 unk0[0x28];
    u8 *table;
} Unk0204198c_B;

typedef struct Unk0204198c {
    s32 unk0;
    Unk0204198c_B *b;
} Unk0204198c;

extern u8 *data_0213e580;
extern u8 *data_0213e434;
s32 func_020523dc(void *, s32);
void func_020828ac(void *, u8, s32);

void func_0204198c(Unk0204198c *obj, u8 *params) {
    u8 index = params[0];
    u8 arg   = params[1];
    u8 *result;
    if (index == 0xFF) {
        result = *(u8 **) (data_0213e580 + 0xF8);
    } else {
        result = (u8 *) func_020523dc(obj->b->table + index * 8, arg);
    }
    if (result == NULL) {
        return;
    }
    func_020828ac(data_0213e434 + 0x21DC + *(u16 *) (result + 0xA) * 0x2C, params[2], 0);
}
