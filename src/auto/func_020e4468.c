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
void func_020e45ec(void);
void func_020e4508(void);
void func_020e4618(void);
s32 func_020e4468(u32 x) {
    if ((x & 0xf) == 0) {
        func_020df768(0, 0, 3, 6, 0, 5, 5, 6);
    } else {
        return 0;
    }
    data_02143020.x80 = 1;
    data_02143020.f70 = func_020e45ec;
    data_02143020.f74 = func_020e4508;
    data_02143020.x88 = 0;
    data_02143020.x84 = 0;
    data_02143020.f78 = func_020e4618;
    func_020df558(x & 0x70000000);
    return 1;
}
