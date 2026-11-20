/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    s32 a, b, c, d, e;
    u8 pad[0x44 - 0x14];
} S;
extern s32 data_027e0000;
extern S data_0213dc60[];
extern S data_0213dbd8[];
void func_02050598(void) {
    s32 i              = data_027e0000;
    data_0213dbd8[i].a = data_0213dc60[i].a;
    data_0213dbd8[i].b = data_0213dc60[i].b;
    data_0213dbd8[i].c = data_0213dc60[i].c;
    data_0213dbd8[i].d = data_0213dc60[i].d;
    data_0213dbd8[i].e = data_0213dc60[i].e;
}
