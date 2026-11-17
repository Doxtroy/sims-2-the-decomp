/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj02019c1c {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
typedef struct Vec2_02019c1c {
    s32 x;
    s32 y;
} Vec2_02019c1c;
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_021302b0[];
extern "C" u8 *func_02019c1c(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_021302b0;
    func_02018ad0(sub);
    *(s32 *) (sub + 0x10) = 0;
    *(s32 *) (sub + 0x14) = 0;
    *(s32 *) (sub + 0x18) = 0;
    func_02018aa0(sub, 0x10);
    {
        volatile Vec2_02019c1c v;
        v.x                   = 0x199;
        v.y                   = 0x199;
        *(s32 *) (sub + 0x20) = 0x199;
    }
    *(u16 *) (sub + 0x1C) = 7;
    sub[0x24]             = 0;
    *(s32 *) (sub + 0x28) = 0;
    *(s32 *) (sub + 0x2C) = 0;
    sub[0x25]             = 0;
    *(u16 *) (obj + 0x10) = 0x10;
    obj[0x48]             = 1;
    ((VObj02019c1c *) obj)->f3(*(s32 *) (params + 4));
    if (*(s32 *) (obj + 0x44) == 0) {
        *(s32 *) (obj + 0x44) = *(s32 *) (obj + 4);
    }
    return obj;
}
