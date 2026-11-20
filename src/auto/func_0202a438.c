/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Ent {
    u8 pad[0x300];
    u8 f300;
    u8 f301;
} Ent;

typedef struct Obj {
    u8 pad[0x28];
    s32 f28;
    u8 pad2c;
    u8 f2d;
    u8 pad2e[2];
    u8 *map;
} Obj;

extern Ent data_0213e710[];
void func_020b38ac(u8 *, Ent *);
void func_02029d28(Obj *);
s32 func_02029e10(Obj *, s32);

s32 func_0202a438(Obj *o, s32 msg, s32 arg) {
    switch (msg) {
        case 8: {
            u32 i, j;
            u8 *p;
            Ent *e;
            o->f2d = 0;
            p      = o->map;
            for (i = 0; i < 0x20; i++) {
                for (j = 0; j < 0x30; j++) {
                    p[j] = 1;
                }
                p += 0x30;
            }
            o->map[0x605] = 0;
            e             = &data_0213e710[o->f28];
            e->f300       = 0;
            e->f300 |= 2;
            func_020b38ac(o->map, e);
            func_02029d28(o);
            return 0;
        }
        case 10:
            return func_02029e10(o, arg);
    }
    return 0;
}
