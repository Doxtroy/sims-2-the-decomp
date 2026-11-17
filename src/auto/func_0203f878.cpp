/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VObj0203f878 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};

struct Entry02139c3c {
    VObj0203f878 obj;
    u8 unk4[0x30];
};

extern Entry02139c3c data_02139c3c[];
extern s32 data_027e0000;

extern "C" s32 func_0203f878(s32 arg) {
    data_02139c3c[data_027e0000].obj.f3(arg);
    return arg;
}
