/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} W;
struct Obj {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *a);
    u8 pad[0x30];
};
extern "C" {
void func_0203f628(void *, W, s32, s32);
extern u8 data_02139c3c[];
extern s32 data_027e0000;

void *func_0203f8b8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    W z;

    *(s32 *) arg0          = arg3;
    *(s32 *) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = arg2;
    *(s32 *) (arg0 + 0x10) = arg4;
    *(s8 *) (arg0 + 0x14)  = 1;
    z.v                    = 0;
    func_0203f628(arg0, z, 1, z.v);
    ((Obj *) (data_02139c3c + data_027e0000 * 0x34))->f2(arg0);
    return arg0;
}
}
