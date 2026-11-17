/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj020248c4 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
typedef struct Vec2_020248c4 {
    s32 x;
    s32 y;
} Vec2_020248c4;
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_02130648[];
extern "C" u8 *func_020248c4(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_02130648;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x2F);
    *(s32 *) (obj + 0x30) = 0;
    *(s32 *) (obj + 0x34) = 0;
    *(s32 *) (obj + 0x38) = 0;
    *(u16 *) (obj + 0x10) = 0x2F;
    ((VObj020248c4 *) obj)->f3(*(s32 *) (params + 4));
    obj[0x28]             = 0;
    *(s8 *) (obj + 0x29)  = -1;
    obj[0x2B]             = 0;
    obj[0x3C]             = 0;
    obj[0x2C]             = 0;
    obj[0x3D]             = 0;
    obj[0x41]             = 0;
    obj[0x3E]             = 0;
    obj[0x3F]             = 0;
    obj[0x40]             = 0;
    *(s32 *) (obj + 0x44) = 0;
    *(u16 *) (obj + 0x48) = 0;
    return obj;
}
