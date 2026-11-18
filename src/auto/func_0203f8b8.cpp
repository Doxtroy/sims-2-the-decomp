/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *);
};
struct VObj {
    VA vt;
    u8 pad[0x30];
};
struct S4 {
    s32 v;
};
struct O {
    s32 a;
    s32 b;
    s32 c;
    s32 pad;
    s32 d;
    u8 e;
};
extern VObj data_02139c3c[];
extern s32 data_027e0000;
extern "C" void func_0203f628(void *, S4, s32);
extern "C" O *func_0203f8b8(O *o, s32 a1, s32 a2, s32 a3, s32 a4) {
    S4 z;
    o->a = a3;
    o->b = a1;
    o->c = a2;
    o->d = a4;
    o->e = 1;
    z.v  = 0;
    func_0203f628(o, z, 1);
    data_02139c3c[data_027e0000].vt.f2(o);
    return o;
}
