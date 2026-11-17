/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj02019100 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_02130188[];
typedef struct Vec2_02019100 {
    s32 x;
    s32 y;
} Vec2_02019100;
extern "C" u8 *func_02019100(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_02130188;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x2);
    *(s32 *) (sub + 0x10) = 0;
    {
        volatile Vec2_02019100 scale;
        scale.x = 0xA000;
        scale.y = 0xA000;
    }
    *(s32 *) (sub + 0x14) = 0xA000;
    *(s32 *) (obj + 0x34) = 0;
    *(s32 *) (obj + 0x38) = 0;
    *(s32 *) (obj + 0x3C) = 0;
    *(u16 *) (obj + 0x10) = 0x2;
    ((VObj02019100 *) obj)->f3(*(s32 *) (params + 4));
    *(u16 *) (obj + 0x40) = 0;
    return obj;
}
