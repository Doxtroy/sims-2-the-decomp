/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020eeb70(void *p);
extern void func_020eeb98(void *p);
extern void func_020fcbb0(void *a, void *b);
extern void func_01ffba84(void *a, void *b);
extern void func_020f57e0(void *a, void *b);
extern void func_020bd608(void *p);

extern u32 data_0213d700;
extern u8 **data_0213d6f0;
extern u8 data_027e1160;
extern u32 data_027e1e0c[];
extern u8 data_027e1ec8;

typedef s32 (*Fn)(u8 *);

void func_0204a9a4(void) {
    u32 i;
    u32 tmp[17];
    u8 *r9;
    u8 *t;

    for (i = 0; i < data_0213d700;) {
        t = data_0213d6f0[i];
        if (((Fn) * (u32 *) (t + 0x3c))(t) != 0) {
            t                            = data_0213d6f0[i];
            data_0213d700                = data_0213d700 - 1;
            data_0213d6f0[i]             = data_0213d6f0[data_0213d700];
            data_0213d6f0[data_0213d700] = t;
        } else {
            r9 = data_0213d6f0[i];
            func_020eeb70(r9 + 0x18);
            func_020eeb98(r9);
            func_020fcbb0(&data_027e1160, tmp);
            func_01ffba84(tmp, r9 + 0x24);
            func_020f57e0(tmp, &data_027e1ec8);
            data_027e1e0c[0x3f] &= ~0xA4u;
            func_020bd608(*(u8 **) (r9 + 0x40) + 0x48 + r9[0x44] * 0xC0);
            i++;
        }
    }
}
