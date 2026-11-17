/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Date0204fcc0 {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} Date0204fcc0;

typedef struct Unk0204fcc0 {
    u8 initialized : 1;
    u8 unk0_1 : 7;
} Unk0204fcc0;

s32 func_021015fc(Date0204fcc0 *);
void func_021014b4(Date0204fcc0 *);

void func_0204fcc0(Unk0204fcc0 *obj) {
    Date0204fcc0 date;
    if (obj->initialized) {
        return;
    }
    if (func_021015fc(&date) == 0) {
        date.a = 0x3B6;
        date.b = 0x331;
        date.c = 0xE35;
        date.d = 0x12E6;
    }
    func_021014b4(&date);
    obj->initialized = 1;
}
