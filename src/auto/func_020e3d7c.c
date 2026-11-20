/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x70];
    void *f70;
    void *f74;
    void *f78;
    u8 pad2[0x80 - 0x7c];
    s32 f80;
    s32 f84;
    s32 f88;
} Ctx;

extern Ctx data_02143020;

void func_020df768(s32, s32, s32, s32, s32, s32, s32, s32);
void func_020df558(u32);
void func_020e41f8(void);
void func_020e4164(void);
void func_020e3e38(void);

s32 func_020e3d7c(u32 flags, s32 en) {
    if (en == 0) {
        return 0;
    }
    if ((flags & 0xF) == 8) {
        func_020df768(0xF, 10, 5, 0, 7, 3, 3, 3);
    } else {
        return 0;
    }
    data_02143020.f80 = 2;
    data_02143020.f70 = (void *) func_020e41f8;
    data_02143020.f74 = (void *) func_020e4164;
    data_02143020.f88 = 0;
    data_02143020.f84 = 1;
    data_02143020.f78 = (void *) func_020e3e38;
    func_020df558(flags & 0x70000000);
    return 1;
}
