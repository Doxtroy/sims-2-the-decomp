/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Params020937b4 {
    u8 unk0[0x10];
    void *unk10;
} Params020937b4;
typedef struct Mode020937b4 {
    s32 unk0;
    s32 state;
} Mode020937b4;
extern u8 *data_0213e434;
extern u8 *data_02139fa4;
extern s32 data_027e0000;
extern u8 *data_0213e580;
extern "C" void func_02083d60(void *, s32);
extern "C" void func_02067990(Mode020937b4 *);
extern "C" s32 func_0200fb30(s32, s32, s32);
extern "C" void *func_02036bfc(void *);
extern "C" void *func_02087268(void *, s32, s32);
extern "C" void func_020117e8(s32, s32, void *, s32);
extern "C" void func_02018acc(void *);
static inline s32 GetModeState(Mode020937b4 *p) {
    if (p != NULL) {
        return p->state;
    }
    return 0x32;
}
extern "C" void func_020937b4(s32 a0, s32 a1) {
    Params020937b4 params;
    func_02083d60(data_0213e434 + 0x18, a1);
    if (GetModeState(*(Mode020937b4 **) (data_02139fa4 + 0xDAC)) == 12) {
        func_02067990(*(Mode020937b4 **) (data_02139fa4 + 0xDAC));
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0200fb30(*(s32 *) (data_0213e580 + 0xF8), 1, 0);
    func_02036bfc(&params);
    params.unk10 = func_02087268(data_0213e580, 0xB, 0x28);
    func_020117e8(*(s32 *) (data_0213e580 + 0xF8), 0x3F, &params, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02018acc(&params);
}
