/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213e6e4;
extern M2C_UNK data_0213e6e8;
extern u8 data_02124ed0;
extern u8 data_02124ee0;
void func_02046384(s32, s32, s32);
void func_020a2280(void);
void func_020a2428(void);
void func_020a27c0(void);
void func_020a2068(s32, s32, void *, s32);
u8 *func_02051d90(s32, void *);
void func_020a1f30(s32, s32, void *, s32);
void func_020a2104(void);
void func_020bbde8(void *, s32, s32, s32, s32);

void func_020a29ec(void) {
    volatile s32 tmp[2];
    u8 *s;
    s32 x;
    u8 *p;
    s32 y;
    enum {
        Z0 = 0
    } z;
    s32 c;

    func_02046384(*(s32 *) &data_0213e6e8, 0, 0x1000);
    func_020a2280();
    func_020a2428();
    func_020a27c0();
    s = *(u8 **) &data_0213e6e4;
    if (s[0x28] >= 2) {
        z      = Z0;
        tmp[0] = z;
        tmp[1] = z;
        if (*(s32 *) (s + 0x10) > z) {
            func_020a2068((*(s32 *) (s + 0xC) >> 12) - (*(s32 *) (s + 0x20) >> 12) & 0xFF, (*(s32 *) (s + 0x10) >> 12) & 0xFF,
                          &data_02124ed0, 2);
        }
    }
    s = *(u8 **) &data_0213e6e4;
    p = func_02051d90(*(s32 *) (s + 0xC) >> 12, s + 0x44);
    x = 2;
    if (*p != 0) {
        y = 2;
        do {
            c = *p;
            if (c >= 0x30 && c <= 0x39) {
                func_020a1f30(x, y, &data_02124ee0 + (c - 0x30) * 5, 1);
                x = (x + 4) & 0xFF;
            }
            p++;
        } while (*p != 0);
    }
    func_020a2104();
    s = *(u8 **) &data_0213e6e4;
    func_020bbde8(*(u8 **) s + 0x1A4, 1, *(s32 *) &data_0213e6e8, 0x1000, 0);
}
