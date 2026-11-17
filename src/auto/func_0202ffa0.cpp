/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Params0202ffa0 {
    u8 unk0[0x20];
    s32 unk20;
    u8 unk24[0xC];
    u16 unk30;
    u8 unk32;
    u8 unk33;
    u8 unk34[8];
} Params0202ffa0;

extern "C" void func_0202fd30(void *, s32);
extern "C" s32 func_020d5680(s32, void *);
extern "C" void *func_0201d124(void *);
extern "C" void func_020117e8(s32, s32, Params0202ffa0 *);
extern "C" void func_02018acc(void *);

extern "C" s32 func_0202ffa0(u8 *obj, s32 cmd, s32 arg) {
    switch (cmd) {
        case 10:
            func_0202fd30(obj, arg);
            break;
        case 4: {
            Params0202ffa0 params;
            func_020d5680(0x103, *(u8 **) (obj + 4) + 0x78);
            func_0201d124(&params);
            params.unk30 = 0x88;
            params.unk20 = *(s32 *) (obj + 4);
            params.unk33 = 0;
            func_020117e8(arg, 3, &params);
            func_02018acc(&params);
            break;
        }
    }
    return 0;
}
