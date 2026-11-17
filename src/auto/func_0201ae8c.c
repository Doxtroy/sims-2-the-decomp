/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct T {
    u8 pad[0x10];
    u8 b10;
    u8 pad11[0x20 - 0x11];
} T;
s32 func_0204ca70(s32);
void *func_02019498(void *);
void func_020117d8(s32, s32, T *, void *);
void func_02018acc(void *);
s32 func_0201ae8c(u8 *o, s32 x) {
    T t;
    if (x == 0) {
        if (o[0x3d] != 0) {
            o[0x50]             = 0;
            *(s32 *) (o + 0x4c) = func_0204ca70(100) + 0xf;
            func_02019498(&t);
            t.b10 = o[0x3c];
            func_020117d8(*(s32 *) (o + 4), 1, &t, o);
            func_02018acc(&t);
        }
        return 0;
    }
    return 0;
}
