/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Slot0213ddc8 {
    u16 id;
    u8 unk2[0x36];
} Slot0213ddc8;

typedef struct Def0211e78c {
    u16 id;
    u8 unk2[6];
} Def0211e78c;

extern u8 data_0213dc40[];
extern Slot0213ddc8 data_0213ddc8[];
extern Def0211e78c data_0211e78c[];
void func_02046384(void *, s32, u32);
void func_02051c4c(s32, s32);

void func_02051d18(void) {
    u32 i;
    func_02046384(data_0213dc40, 0, 0x88);
    func_02046384(data_0213ddc8, 0, 0x1F8);
    for (i = 0; i < 9; i++) {
        data_0213ddc8[i].id = data_0211e78c[i].id;
        func_02051c4c(i, 0);
    }
}
