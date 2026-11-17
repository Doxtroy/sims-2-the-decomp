/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0204a794 {
    u8 unk0[0x40];
    s32 id;
} Unk0204a794;

extern u32 data_0213d700;
extern Unk0204a794 **data_0213d6f0;

void func_0204a794(s32 id) {
    u32 i = 0;
    while (i < data_0213d700) {
        Unk0204a794 **list = data_0213d6f0;
        Unk0204a794 *item  = list[i];
        if (item->id == id) {
            data_0213d700--;
            list[i]                      = list[data_0213d700];
            data_0213d6f0[data_0213d700] = item;
        } else {
            i++;
        }
    }
}
