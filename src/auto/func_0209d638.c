/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020105d0(void *);
void func_020444f8(s32);
void func_020d5604(s32);
extern u8 *data_0213e5a0;
extern s32 data_027e0000;
extern u8 data_027e0014[];
void func_0209d638(u8 *o) {
    s32 v;
    *(s32 *) (data_0213e5a0 + 0x600) = 4;
    func_020105d0(data_027e0014 + data_027e0000 * 0x34);
    func_020444f8(0x178c);
    v = *(s32 *) (o + 0xc6c);
    if (v != -1) {
        func_020d5604(v);
    }
}
