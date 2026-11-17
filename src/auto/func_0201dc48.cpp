/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj0201dc48 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
typedef struct Vec2_0201dc48 {
    s32 x;
    s32 y;
} Vec2_0201dc48;
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_02130514[];
extern "C" u8 *func_0201dc48(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_02130514;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x46);
    *(s32 *) (sub + 0x10) = 0;
    {
        volatile Vec2_0201dc48 a;
        volatile Vec2_0201dc48 b;
        a.x                   = 0x1000;
        b.x                   = 0x1000;
        *(s32 *) (sub + 0x14) = 0x1000;
        a.y                   = 0;
        b.y                   = 0;
        *(s32 *) (sub + 0x18) = 0;
    }
    *(s32 *) (sub + 0x1C) = 0x20;
    sub[0x20]             = 0;
    sub[0x21]             = 1;
    sub[0x22]             = 0;
    sub[0x23]             = 0;
    *(u16 *) (obj + 0x10) = 0x46;
    ((VObj0201dc48 *) obj)->f3(*(s32 *) (params + 4));
    return obj;
}
