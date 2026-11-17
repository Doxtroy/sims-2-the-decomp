/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct H {
    void *h;
    u8 pad[0x1c];
} H;
extern H data_02139ea0[];
extern s32 data_027e0000;
u16 func_020ec718(void *, u16);
void *func_020ec920(void *, u32, s32);
void func_020fca8c(s32, void *, u32);
void *func_02046548(u32 size, s32 id, s32 align) {
    volatile s32 z;
    void *p = data_02139ea0[id].h;
    func_020ec718(p, id);
    if (data_027e0000 == 0) {
        p = func_020ec920(p, size, align);
    } else {
        p = func_020ec920(p, size, -align);
    }
    if (p == NULL) {
        p = NULL;
    }
    if (p != NULL) {
        z = 0;
        func_020fca8c(z, p, (size + (align - 1)) & ~(align - 1));
    }
    return p;
}
