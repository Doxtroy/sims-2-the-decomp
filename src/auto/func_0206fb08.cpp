/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Word0206fb08 {
    s32 value;
};

struct VObj0206fb08 {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *, Word0206fb08, Word0206fb08);
};

extern "C" void func_0206f200(s32, s32);

extern "C" void func_0206fb08(u8 *obj) {
    VObj0206fb08 *handler = *(VObj0206fb08 **) (obj + 0x74);
    if (handler->f2(obj, *(Word0206fb08 *) (obj + 0x80), *(Word0206fb08 *) (obj + 0x84)) == 0) {
        return;
    }
    func_0206f200(*(s32 *) (obj + 0x90), (*(s32 *) (obj + 0x84) >> 12) - 0x35);
}
