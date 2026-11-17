/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Word0206e4f4 {
    s32 value;
};

struct VObj0206e4f4 {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *, Word0206e4f4, Word0206e4f4);
};

extern "C" void func_020165bc(void *, s32);
extern "C" void func_0206f24c(void *, s32);

extern "C" void func_0206e4f4(u8 *obj) {
    if ((*(VObj0206e4f4 **) (obj + 0x74))->f2(obj, *(Word0206e4f4 *) (obj + 0x80), *(Word0206e4f4 *) (obj + 0x84)) != 0) {
        func_020165bc(obj, 1);
        if ((*(s32 *) (obj + 0x94))-- != 0) {
            return;
        }
        func_0206f24c(*(void **) (obj + 0x90), *(u16 *) (obj + 0xA));
        *(s32 *) (obj + 0x94) = 4;
    } else {
        func_020165bc(obj, 0);
        *(s32 *) (obj + 0x94) = 0;
    }
}
