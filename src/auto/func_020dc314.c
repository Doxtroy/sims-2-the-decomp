/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

typedef struct Elem Elem;
struct Elem {
    u8 pad[0x14];
    void (*fn)(Elem *, s32);
    u8 pad18[0x17c - 0x18];
};

s32 func_020daea8(void);
void func_020dc82c(void *, s32);
void func_020dc5bc(void *, s32);
void func_020de448(void *);

s32 func_020dc314(u8 *p, s32 mode) {
    s32 now;
    u32 i;
    s32 flag;

    flag = 0;
    if (p == NULL) {
        return 0;
    }
    now = func_020daea8();
    func_020dc82c(p, now);
    func_020dc5bc(p, now);
    if (mode == 0) {
        if (*(s32 *) (p + 0xDC) != 0) {
            flag = 1;
        }
    } else if (*(s32 *) (p + 0xDC) == 0) {
        if (*(s32 *) (p + 0x268) != 0) {
            *(s32 *) (p + 0x330) = now - *(s32 *) (p + 0x268);
        } else {
            *(s32 *) (p + 0x330) = 0;
        }
    }
    *(s32 *) (p + 0xDC) = mode;
    for (i = 0; i < *(u32 *) (p + 0x2E8); i++) {
        Elem *e = &(*(Elem **) (p + 0x2F0))[i];
        e->fn(e, mode);
    }
    if (*(s32 *) (p + 0x258) != 0 && *(u32 *) (p + 0x2E8) != 0) {
        func_020de448(p);
    }
    if (flag) {
        *(s32 *) (p + 0x268) = func_020daea8() - *(s32 *) (p + 0x330);
    }
    return *(s32 *) (p + 0xDC);
}
