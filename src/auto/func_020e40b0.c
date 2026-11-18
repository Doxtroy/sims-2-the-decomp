/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct G {
    u8 pad[0x70];
    void *f70;
    void *f74;
    void *f78;
    u32 pad7c;
    s32 x80;
    s32 x84;
    s32 x88;
} G;
extern G data_02143020;
void func_020df768(s32, s32, s32, s32, s32, s32, s32, s32);
void func_020df558(u32);
void func_020e41f8(void);
void func_020e4164(void);
void func_020e4224(void);
s32 func_020e40b0(u32 x) {
    switch (x & 0xf) {
        case 8:
        case 9:
            func_020df768(0xf, 10, 5, 0, 7, 3, 3, 3);
            break;
        default:
            return 0;
    }
    data_02143020.x80 = 2;
    data_02143020.f70 = func_020e41f8;
    data_02143020.f74 = func_020e4164;
    data_02143020.x88 = 0;
    data_02143020.x84 = 1;
    data_02143020.f78 = func_020e4224;
    func_020df558(x & 0x70000000);
    return 1;
}
