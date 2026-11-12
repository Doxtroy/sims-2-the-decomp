/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" {
extern s32 data_027e0000;
extern u8 data_02139c3c[];
s32 func_0203f878(s32 arg0) {
    VA *o = (VA *) (data_02139c3c + data_027e0000 * 0x34);
    o->f3(arg0);
    return arg0;
}
}
