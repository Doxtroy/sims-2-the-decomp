/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0212faec;
void func_02046844(void *);
void func_0204681c(void *);

typedef struct Obj {
    void *vt;
    u8 owned;
    u8 count;
    u8 b6;
    u8 b7;
    void **items;
    void *cur;
} Obj;

Obj *func_0200bc10(Obj *o) {
    s32 i;
    o->vt = &data_0212faec;
    if (o->items != 0) {
        for (i = 0; i < o->count; i++) {
            if (o->cur == o->items[i]) {
                o->cur = 0;
            }
            func_02046844(o->items[i]);
        }
        func_0204681c(o->items);
        o->items = 0;
    }
    o->count = 0;
    o->b6    = 0;
    if (o->cur != 0) {
        if (o->owned) {
            func_02046844(o->cur);
            o->owned = 0;
        }
        o->cur = 0;
    }
    func_02046844(o);
    return o;
}
