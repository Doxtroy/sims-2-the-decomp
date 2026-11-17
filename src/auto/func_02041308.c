/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02041308_B {
    u8 unk0[0x28];
    u8 *table;
} Unk02041308_B;

typedef struct Unk02041308 {
    s32 unk0;
    Unk02041308_B *b;
} Unk02041308;

extern u8 *data_0213e580;
s32 func_020523dc(void *, s32);
void func_02076b60(void *);

void func_02041308(Unk02041308 *obj, u8 *params) {
    u8 index = params[2];
    u8 arg   = params[3];
    u8 *result;
    if (index == 0xFF) {
        result = *(u8 **) (data_0213e580 + 0xF8);
    } else {
        result = (u8 *) func_020523dc(obj->b->table + index * 8, arg);
    }
    if (result == NULL) {
        return;
    }
    func_02076b60(result + 0x78);
}
