/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry0204dfcc {
    s32 value;
    u8 unk4[0x14];
} Entry0204dfcc;

typedef struct Unk0213d890 {
    void *buffer;
    s32 type;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 unk14[8];
    s32 unk1C;
    s32 unk20;
} Unk0213d890;

extern Unk0213d890 data_0213d890;
extern Entry0204dfcc data_0213d8d0[];
extern Entry0204dfcc data_0211e724[];
void *func_02046880(s32, s32, s32);
void func_0204d7d4(s32);

void func_0204dfcc(s32 arg0, s32 type, s32 arg2, s32 arg3, s32 arg4) {
    data_0213d890.buffer = func_02046880(0x400, 3, 4);
    data_0213d890.type   = type;
    data_0213d890.unkC   = arg3;
    data_0213d890.unk8   = arg2;
    data_0213d890.unk1C  = data_0211e724[type].value;
    data_0213d890.unk20  = arg4;
    data_0213d890.unk10  = data_0213d8d0[type].value + 1;
    func_0204d7d4(0);
}
