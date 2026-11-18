/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213d798;
extern u32 *data_0213d79c;
extern u32 *data_0213d7a0;
extern u32 data_0213d7ac;
void func_0204cc68(u32 seed) {
    u32 x = seed | 1, *s = data_0213d7a0;
    int j;
    data_0213d7ac = seed;
    for (data_0213d798 = 0, *s++ = x, j = 0x270; --j; *s++ = (x *= 69069))
        ;
    data_0213d798 = 0x26f;
    data_0213d79c = data_0213d7a0 + 1;
}
