/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139fa4;
extern u8 data_0213e580;
extern u8 data_0213e434;

void func_02046b6c(u8 *p, s32 v);
void func_ov003_0214f214(s32 a, s32 b, s32 c, u8 *d);
void func_0200ea74(u8 *a, u8 *b);

void func_0205ebb0(u8 *arg0, s32 arg1) {
    u8 fr[0x24];
    s32 r5;
    u8 *r4;
    u8 *src;
    u8 *dst;
    s32 r6;
    u8 b0;
    u8 b1;

    r6 = arg1;
    if (arg0[6] == r6) {
        return;
    }
    func_02046b6c(*(u8 **) &data_02139fa4, 9);
    r5                   = 0;
    r4                   = *(u8 **) (*(u8 **) &data_0213e580 + 0xF8);
    src                  = r4 + 0x220;
    *(u16 *) (fr + 0x00) = *(u16 *) (src + 0x00);
    *(u16 *) (fr + 0x02) = *(u16 *) (src + 0x02);
    *(u16 *) (fr + 0x04) = *(u16 *) (src + 0x04);
    *(u16 *) (fr + 0x06) = *(u16 *) (src + 0x06);
    *(u16 *) (fr + 0x08) = *(u16 *) (src + 0x08);
    *(u16 *) (fr + 0x0A) = *(u16 *) (src + 0x0A);
    *(u16 *) (fr + 0x0C) = *(u16 *) (src + 0x0C);
    *(u16 *) (fr + 0x0E) = *(u16 *) (src + 0x0E);
    *(u16 *) (fr + 0x10) = *(u16 *) (src + 0x10);
    *(u16 *) (fr + 0x12) = *(u16 *) (src + 0x12);
    *(u16 *) (fr + 0x14) = *(u16 *) (src + 0x14);
    *(u16 *) (fr + 0x16) = *(u16 *) (src + 0x16);
    *(u32 *) (fr + 0x18) = *(u32 *) (src + 0x18);
    b0                   = src[0x1C];
    b1                   = src[0x1D];
    fr[0x1C]             = b0;
    fr[0x1D]             = b1;
    b0                   = src[0x1E];
    b1                   = src[0x1F];
    fr[0x1E]             = b0;
    fr[0x1F]             = b1;
    b0                   = src[0x20];
    fr[0x20]             = b0;
    if (*(u16 *) (r4 + 0xA) == 0x3A || *(u16 *) (r4 + 0xA) == 0x3C) {
        r5 = 1;
    }
    if (r6 != 2) {
        if (fr[0x20] != 0) {
            arg0[8]  = fr[0x20];
            fr[0x20] = 0;
        }
    }
    if (r6 == 0) {
        func_ov003_0214f214(r5, 1, arg0[1], fr);
    } else if (r6 == 2) {
        if (arg0[8] != 0) {
            fr[0x20] = arg0[8];
        }
    }
    func_ov003_0214f214(r5, r6, arg0[r6], fr);
    func_0200ea74(r4, fr);
    dst                   = *(u8 **) &data_0213e434 + 0x47AC;
    *(u32 *) (fr + 0x18)  = *(u32 *) (dst + 0x18);
    *(u16 *) (dst + 0x00) = *(u16 *) (fr + 0x00);
    *(u16 *) (dst + 0x02) = *(u16 *) (fr + 0x02);
    *(u16 *) (dst + 0x04) = *(u16 *) (fr + 0x04);
    *(u16 *) (dst + 0x06) = *(u16 *) (fr + 0x06);
    *(u16 *) (dst + 0x08) = *(u16 *) (fr + 0x08);
    *(u16 *) (dst + 0x0A) = *(u16 *) (fr + 0x0A);
    *(u16 *) (dst + 0x0C) = *(u16 *) (fr + 0x0C);
    *(u16 *) (dst + 0x0E) = *(u16 *) (fr + 0x0E);
    *(u16 *) (dst + 0x10) = *(u16 *) (fr + 0x10);
    *(u16 *) (dst + 0x12) = *(u16 *) (fr + 0x12);
    *(u16 *) (dst + 0x14) = *(u16 *) (fr + 0x14);
    *(u16 *) (dst + 0x16) = *(u16 *) (fr + 0x16);
    *(u32 *) (dst + 0x18) = *(u32 *) (fr + 0x18);
    b0                    = fr[0x1C];
    b1                    = fr[0x1D];
    dst[0x1C]             = b0;
    dst[0x1D]             = b1;
    b0                    = fr[0x1E];
    b1                    = fr[0x1F];
    dst[0x1E]             = b0;
    dst[0x1F]             = b1;
    b0                    = fr[0x20];
    dst[0x20]             = b0;
    arg0[7]               = arg0[6];
    arg0[6]               = r6;
}
