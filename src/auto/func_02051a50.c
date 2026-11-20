/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 id;
    u16 cnt;
    void *p4;
    u8 b8;
    u8 pad9;
    u16 a;
    u16 c;
    u8 e;
    u8 padf;
    void *p10;
    void *p14;
    void *p18;
} Sub;

typedef struct {
    Sub s[2];
} Ent;

typedef struct {
    u8 pad0[8];
    Sub *a;
    Sub *b;
    s32 x;
    s32 z;
    s32 y;
    s32 n;
    u8 pad20[0x10];
    s32 mode;
    u8 pad34[0x10];
} G;

extern G data_0213dc40[];
extern Ent data_0213ddc8[];
extern s32 data_027e0000;

void func_02051a50(s32 idx, s32 a, s32 b) {
    data_0213dc40[data_027e0000].a = &data_0213ddc8[idx].s[0];
    data_0213dc40[data_027e0000].b = &data_0213ddc8[idx].s[1];
    data_0213dc40[data_027e0000].n = data_0213dc40[data_027e0000].a->e;
    if (data_0213dc40[data_027e0000].mode == 1) {
        data_0213dc40[data_027e0000].x = a;
        data_0213dc40[data_027e0000].y = 0;
    } else {
        data_0213dc40[data_027e0000].x = a & 0xf;
        data_0213dc40[data_027e0000].y = (a >> 4) << 12;
    }
    data_0213dc40[data_027e0000].z = b;
}
