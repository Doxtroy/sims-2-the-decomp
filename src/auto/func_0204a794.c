/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213d6f0;
extern u32 data_0213d700;
void func_0204a794(s32 arg0) {
    u32 i;
    u8 **list;
    u8 *temp_r4;
    for (i = 0; i < data_0213d700;) {
        list    = *(u8 ***) &data_0213d6f0;
        temp_r4 = list[i];
        if (*(s32 *) (temp_r4 + 0x40) != arg0) {
            i += 1;
        } else {
            data_0213d700 -= 1;
            list[i]             = list[data_0213d700];
            list                = *(u8 ***) &data_0213d6f0;
            list[data_0213d700] = temp_r4;
        }
    }
}
