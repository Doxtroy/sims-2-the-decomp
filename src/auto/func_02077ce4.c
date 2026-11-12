/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02051338(s32, s32, s32, s32, s32);
s32 func_02052258(s32);
s32 func_021071c8(void);
s32 func_0210730c(void);
s32 func_0210734c(void);
s32 func_0210a4fc(void *, void *);
void func_0210a628(void *, void *, s32);
void func_0210a69c(void *, s32);

s32 func_02077ce4(s32 *arg0, s32 arg1) {
    s32 sp4;
    struct {
        s32 v;
        s8 b;
        s32 pad[2];
    } sp8;
    s32 sp18[33];

    sp4 = 0;
    if ((func_021071c8() != 0) && (func_0210734c() != 0)) {
        sp4 = func_0210730c();
    }
    func_0210a628(&sp8, &sp4, 4);
    sp8.b = 0;
    func_0210a69c(sp18, func_02052258(0x999));
    if (func_0210a4fc(&sp8, sp18) == 0) {
        if (arg1 != 0) {
            *arg0 = func_02051338(*arg0, 0x76, 0xAD, func_02052258(0x998), 1);
        }
        return 1;
    }
    return 0;
}
