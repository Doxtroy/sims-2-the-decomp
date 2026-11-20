/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Tbl {
    u16 a[4];
} Tbl;

typedef struct Obj {
    u8 pad[0x226];
    u16 f226;
} Obj;

extern Tbl data_0212fbc4;
void func_0200dc20(Obj *, s32, u16);

void func_0200e878(Obj *o, u32 v, s32 force) {
    Tbl t;
    if (force == 0 && o->f226 == v) {
        return;
    }
    o->f226                     = v;
    t                           = data_0212fbc4;
    *(volatile u16 *) 0x4000280 = 0;
    *(volatile u32 *) 0x4000290 = v;
    *(volatile u64 *) 0x4000298 = 5;
    while (*(volatile u16 *) 0x4000280 & 0x8000) {
    }
    func_0200dc20(o, 3, t.a[*(volatile s32 *) 0x40002a0]);
}
