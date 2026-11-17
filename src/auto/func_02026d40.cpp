/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Params02026d40 {
    u8 unk0[0x30];
    u16 unk30;
    u8 unk32[3];
    u8 unk35;
    u8 unk36[6];
} Params02026d40;

extern "C" void func_01ffac40(void *, void *);
extern "C" void *func_0201d124(void *);
extern "C" void func_020117e8(s32, s32, Params02026d40 *, void *);
extern "C" void func_02018acc(void *);

extern "C" s32 func_02026d40(u8 *obj, s32 cmd, u8 *arg) {
    if (cmd == 5) {
        u8 flag = arg[0];
        Params02026d40 params;
        func_01ffac40(*(u8 **) (obj + 4) + 0xE0, obj);
        func_0201d124(&params);
        if (flag) {
            params.unk30 = 0x40;
            params.unk35 = 1;
        } else {
            params.unk30 = 1;
            params.unk35 = 1;
        }
        func_020117e8(*(s32 *) (obj + 4), 3, &params, obj);
        obj[0x13] = 1;
        func_02018acc(&params);
        return 0;
    }
    return 0;
}
