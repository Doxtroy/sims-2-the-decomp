/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
s64 func_020fbfdc(void);
}

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
};

struct Obj {
    Fx32 unk0;
    Fx32 unk4;
    s32 unk8;
    u8 unkC[4];
    u8 pad10[0x1c - 0x10];
    s64 unk1C;
    s32 unk24;
    s32 unk28;
    u8 pad2C[0x39 - 0x2c];
    u8 unk39;
    u8 unk3A;
    u8 pad3B[0x43 - 0x3b];
    u8 unk43[5];
    u8 unk48[5];
    u8 pad4D[0x54 - 0x4d];
    s32 unk54;
    s32 unk58;
    s32 unk5C[5];
    u8 pad70[0x2128 - 0x70];
    u8 unk2128[5];
    u8 pad212D[0x2140 - 0x212d];
    u8 unk2140;
    u8 unk2141;
    s32 unk2144;
    s32 unk2148;
};

extern "C" void func_02083e18(Obj *o) {
    s32 i;

    for (i = 0; i < 4; i++) {
        o->unkC[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        o->unk43[i] = 0;
        o->unk48[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        o->unk2128[i] = 0;
    }
    o->unk1C = func_020fbfdc();
    for (i = 0; i < 5; i++) {
        o->unk5C[i] = 0;
    }
    o->unk28   = 0x80000000;
    o->unk24   = 0x80000000;
    o->unk2148 = 0x80000000;
    o->unk8    = 0;
    o->unk39   = 0;
    o->unk3A   = 0;
    o->unk54   = 0;
    o->unk58   = 0;
    o->unk2144 = 0;
    o->unk2141 = 0;
    o->unk2140 = 0;
    o->unk0    = Fx32(0x64000);
    o->unk4    = Fx32(0x64000);
}
