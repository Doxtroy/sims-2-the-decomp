/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Word020c0e74 {
    s32 value;
};

struct VObj020c0e74 {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *, Word020c0e74, Word020c0e74);
};

typedef struct Entry0212787c {
    s32 unk0;
    s32 unk4;
} Entry0212787c;

extern Entry0212787c data_0212787c[];
extern "C" void func_02016708(void *, Entry0212787c *);

extern "C" void func_020c0e74(u8 *obj) {
    s32 dir;
    if (obj[0x94] == 0) {
        return;
    }
    dir = (*(VObj020c0e74 **) (obj + 0x74))->f2(obj, *(Word020c0e74 *) (obj + 0x80), *(Word020c0e74 *) (obj + 0x84));
    *(u32 *) (obj + 0x14) = (*(u32 *) (obj + 0x14) & ~0xF000) | (((dir + 13) & 0xF) << 12);
    func_02016708(obj, &data_0212787c[dir + 3]);
}
