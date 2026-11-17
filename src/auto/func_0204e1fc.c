/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0211e728 {
    s32 value;
    s32 unk4[5];
} Unk0211e728;

extern Unk0211e728 data_0211e728[];

s32 func_0204e1fc(s32 arg0, s32 index, s32 flag) {
    if (!flag) {
        return data_0211e728[index].value;
    } else {
        return data_0211e728[index].value - 20;
    }
}
