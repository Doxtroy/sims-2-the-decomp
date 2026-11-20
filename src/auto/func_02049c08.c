/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct E {
    u16 id;
    u8 pad[6];
    u16 *ptr;
} E;
typedef struct R {
    s32 idx;
    E e[16];
} R;
extern s32 data_027e0000;
extern R data_0213d568[];
void func_0203f144(u16, s32, s32);

void func_02049c08(s32 arg0, u16 *arg1) {
    data_0213d568[data_027e0000].e[arg0].id  = arg0;
    data_0213d568[data_027e0000].e[arg0].ptr = arg1;
    func_0203f144(arg1[data_0213d568[data_027e0000].idx], arg0 << 4, 0x10);
}
