/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj0201d4bc {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
typedef struct Vec2_0201d4bc {
    s32 x;
    s32 y;
} Vec2_0201d4bc;
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_02130478[];
extern "C" u8 *func_0201d4bc(u8 *obj, u8 *params) {
    u8 *sub;
    s32 i;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_02130478;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x22);
    for (i = 0; i < 2; i++) {
        ((u16 *) (sub + 0x10))[i] = 0x14B;
        ((s32 *) (sub + 0x14))[i] = 0;
    }
    *(u16 *) (sub + 0x1C) = 0x135;
    sub[0x1E]             = 0;
    *(s32 *) (sub + 0x20) = 0;
    *(u16 *) (obj + 0x10) = 0x22;
    ((VObj0201d4bc *) obj)->f3(*(s32 *) (params + 4));
    if (*(s32 *) (obj + 0x38) == 0) {
        *(s32 *) (obj + 0x38) = *(s32 *) (obj + 4);
    }
    return obj;
}
