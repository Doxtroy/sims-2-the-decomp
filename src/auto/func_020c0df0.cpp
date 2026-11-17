/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Word020c0df0 {
    s32 value;
};

struct VObj020c0df0 {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *, Word020c0df0, Word020c0df0);
};

extern u8 data_02127894[];
extern "C" void func_02016708(void *, void *);
extern "C" s32 func_020d59bc(s32);
extern "C" void func_020bf4b4(s32);

extern "C" void func_020c0df0(u8 *obj) {
    u8 *owner;
    if (obj[0x94] == 0) {
        return;
    }
    *(u32 *) (obj + 0x14) = (*(u32 *) (obj + 0x14) & ~0xF000) | 0xD000;
    func_02016708(obj, data_02127894);
    if ((*(VObj020c0df0 **) (obj + 0x74))->f2(obj, *(Word020c0df0 *) (obj + 0x80), *(Word020c0df0 *) (obj + 0x84)) == 0) {
        return;
    }
    owner = *(u8 **) (obj + 0x90);
    func_020d59bc(0x173);
    func_020bf4b4(*(s32 *) (owner + 0x11C));
}
