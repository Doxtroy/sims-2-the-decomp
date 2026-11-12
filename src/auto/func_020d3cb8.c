/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_021424e0[];
extern u8 *data_021424d4;
extern u8 data_02142848[];
extern u8 data_02142548[];

void func_020d11c4();
void func_020d0774();
void func_020d1040();
void func_020d29a0();
s32 func_020d2bdc();

void func_020d3cb8(s32 arg0) {
    u8 *p;
    s32 r4;
    u8 *c;
    u8 *e;
    u8 *t;
    u32 b;

    p = data_021424e0[arg0];
    if (p == NULL) {
        return;
    }
    data_021424d4 = p;
    if (p[0x28] != 1) {
        return;
    }
    r4 = data_02142848[0x10] - 1;
    while (r4 >= 0) {
        c = data_021424d4;
        e = c + 0x93C + (r4 << 5);
        b = e[0xA];
        if (b != 0xFF && *(s32 *) (data_02142548 + r4 * 0x18) == 0 && c[0x3B] == data_02142848[r4 + 0x634]) {
            t = c + b * 0x24;
            if (r4 == t[0x44]) {
                t[0x44] = 0xFF;
            }
            e[0xA]                    = 0xFF;
            data_02142848[r4 + 0x634] = 3;
        }
        r4--;
    }
    if (data_021424d4[0x37]-- == 0) {
        data_021424d4[0x37] = 0;
        data_021424d4[0x2A]--;
        if (data_021424d4[0x2A] == 0) {
            data_021424d4[0x2A] = data_021424d4[0x2E];
            if (data_021424d4[0x36]-- == 0) {
                data_021424d4[0x36] = 0;
                if (((u16 *) (data_021424d4 + 0x22))[0]-- == 0) {
                    if (func_020d2bdc() == 1) {
                        return;
                    }
                    ((u16 *) (data_021424d4 + 0x22))[0]--;
                }
                func_020d29a0();
            }
            if (!(data_021424d4[0x2F] & 0x10)) {
                func_020d11c4();
            }
        } else {
            func_020d11c4();
        }
    } else {
        func_020d11c4();
    }
    func_020d0774();
    func_020d1040();
}
