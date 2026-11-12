/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

typedef struct {
    u8 o8[0x1C];
    u8 o24[0x3C];
    u8 o60[0x4C];
} Fr;

extern "C" {
s32 func_020117e8(...);
void func_02026be8(...);
void func_0201d124(...);
void func_020269b4(...);
void func_02018acc(...);
void func_02083dc8(...);
s32 func_0205871c(...);
extern u8 *data_0213e434;
extern u8 *data_0213e580;
extern s32 data_02139fa4;

s32 func_0208ec10(u8 *arg0) {
    Fr f;
    u8 *g;
    s32 t5;

    g = data_0213e434;
    if (*(s32 *) (g + 0x215C) < 6) {
        t5 = *(s32 *) (data_0213e580 + 0xF8);
        func_02083dc8(g + 0x18, *(u16 *) (*(u8 **) (arg0 + 4) + 0xA));
        func_02026be8(f.o8);
        func_020117e8(t5, 0x26, f.o8, 0);
        func_0201d124(f.o24);
        *(u16 *) (f.o24 + 0x30) = 0x51;
        *(s32 *) (f.o24 + 0x10) = 0x16D;
        func_020117e8(t5, 3, f.o24, 0);
        func_020269b4(f.o60);
        *(u16 *) (f.o60 + 0x30) = 0x50;
        *(u8 **) (f.o60 + 0x10) = *(u8 **) (arg0 + 4);
        *(u16 *) (f.o60 + 0x1C) = 0x13;
        *(u8 **) (f.o60 + 0x18) = *(u8 **) (arg0 + 4);
        *(s32 *) (f.o60 + 0x2C) = 0;
        func_020117e8(t5, 8, f.o60, 0);
        *(s32 *) (*(u8 **) (arg0 + 4) + 0x130) = 0;
        if (arg0 != 0) {
            ((VA *) arg0)->f1();
        }
        func_02018acc(f.o60);
        func_02018acc(f.o24);
        func_02018acc(f.o8);
        return 6;
    }
    func_0205871c(data_02139fa4, 0x98B, -1, 0, 0, 1);
    return 0;
}
}
