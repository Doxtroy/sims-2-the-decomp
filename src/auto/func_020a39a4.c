/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
    u16 b;
    u8 c;
    u8 d;
} E;

typedef struct {
    u8 *f0;
    s16 f4;
    s16 f6;
    s16 f8;
    E e[16];
    u16 pad6a;
    s16 f6c;
    s16 f6e;
    s16 f70;
    s16 f72;
    s32 f74;
    s32 f78;
    s32 f7c;
    s32 f80;
    s32 f84;
    u8 pad88[0x10];
    u8 f98;
} S;

void func_02046384(void *, s32, s32);
void *func_02046880(s32, s32, s32);
void *func_0204688c(s32, s32, s32);
void func_020bbcf0(void *, s32, void *, s32, s32, s32);
extern u8 data_02125064;
extern u8 *data_0213e434;
extern void *data_0213e6ec;
extern S *data_0213e6f0;

void func_020a39a4(u8 *arg0, u8 arg1) {
    u8 i;

    data_0213e6f0 = func_0204688c(0x9C, 3, 4);
    func_02046384(data_0213e6f0, 0, 0x9C);
    data_0213e6ec = func_02046880(0x1000, 3, 4);
    func_02046384(data_0213e6ec, 0, 0x1000);
    data_0213e6f0->f0 = arg0;
    func_020bbcf0(data_0213e6f0->f0 + 0x1A4, 1, &data_02125064, 8, 0, 0);
    data_0213e6f0->f98 = arg1;
    data_0213e6f0->f84 = *(s32 *) (data_0213e434 + 0x4694);
    data_0213e6f0->f74 = 0;
    data_0213e6f0->f70 = 3;
    data_0213e6f0->f6c = 0x40;
    data_0213e6f0->f6e = 0;
    data_0213e6f0->f78 = 0;
    data_0213e6f0->f6  = 0;
    data_0213e6f0->f8  = (data_0213e6f0->f80 + 1) * 5;
    data_0213e6f0->f7c = 0xF;
    for (i = 0; i < 16; i++) {
        data_0213e6f0->e[i].c = 0;
    }
    data_0213e6f0->f80 = 0;
    data_0213e6f0->f7c = 0x1E;
    data_0213e6f0->f4  = 0x38;
}
