/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VObj0201d004 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};

extern "C" void func_02018734(void *, void *, void *);
extern "C" void *func_0201d124(void *);
extern u8 data_02130428[];

extern "C" u8 *func_0201d004(u8 *obj, u8 *params) {
    func_02018734(obj, params, obj + 0x18);
    *(void **) obj = data_02130428;
    func_0201d124(obj + 0x18);
    *(u16 *) (obj + 0x10) = 3;
    ((VObj0201d004 *) obj)->f3(*(s32 *) (params + 4));
    if (*(s32 *) (obj + 0x38) == 0) {
        *(s32 *) (obj + 0x38) = *(s32 *) (obj + 4);
    }
    return obj;
}
