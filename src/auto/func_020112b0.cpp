/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct ValueManager {
    s32 GetById(s32);
};

struct Obj {
    u8 pad0[0x24];
    ValueManager vm;
    u8 pad28[0x20d - 0x25];
    u8 b20d;
    u8 b20e;
    u8 b20f;
    u8 b210;
};

struct Glob {
    u8 pad[0xf8];
    s32 unkf8;
};

extern "C" {
extern u8 data_02139fb4[];
extern Glob *data_0213e580;
s32 func_0200d014(void *, s32, s32);

void func_020112b0(Obj *o) {
    s32 v;
    if (o->b20d != 0 && o->b20f != 0) {
        v = o->b210;
        if (v >= 31) {
            return;
        }
        v += 3;
        if (v > 31) {
            v = 31;
        }
        o->b210 = v;
        return;
    }
    {
        s32 id = o->vm.GetById(0);
        s32 w  = o->b210;
        if (func_0200d014(data_02139fb4, data_0213e580->unkf8 + 0x78, id) != 0) {
            if (w == 0) {
                return;
            }
            w -= 3;
            if (w < 0) {
                w = 0;
            }
            o->b210 = w;
            return;
        }
        if (w >= 31) {
            return;
        }
        w += 3;
        if (w > 31) {
            w = 31;
        }
        o->b210 = w;
    }
}
}
