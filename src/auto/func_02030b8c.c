/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020bdb84(void *, s32);
extern void func_020bd908(void *, u32, s32, s32, s32);
extern void func_020bbee0(u8 *, void *);
extern void func_020bdb24(void *);

extern u8 data_0211e280[];
extern u8 data_02131330[];
extern u8 data_0211e278[];

void func_02030b8c(u8 *arg0) {
    s32 tmp[9];
    u8 *p = arg0;

    if (p[0x28] == 0) {
        return;
    }
    if (*(s32 *) (p + 0x34) <= 0) {
        return;
    }
    *(s32 *) (p + 0x34) = *(s32 *) (p + 0x34) - 1;
    if (*(s32 *) (p + 0x34) > 0) {
        return;
    }
    p[0x30] = p[0x30] + 1;
    if (p[0x30] >= data_0211e280[p[0x31]]) {
        p[0x30] = 0;
    }
    func_020bdb84(tmp, 0xffff);
    func_020bd908(tmp, *(u16 *) (*(u8 **) (data_02131330 + p[0x31] * 4) + p[0x30] * 2), 0x20, 0x20, 4);
    func_020bbee0(*(u8 **) (p + 4) + 0x1a4, tmp);
    *(s32 *) (p + 0x34) = data_0211e278[p[0x31]];
    func_020bdb24(tmp);
}
