/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

typedef struct {
    u16 v;
} S16;
typedef struct {
    u16 a, b;
} A16;
typedef struct {
    u8 a, b, c, d;
} B8;
typedef enum {
    Z0 = 0
} ZE;

extern "C" {
void func_0203d208(s32, S16);
void func_0203cc08(s32, s32);
void func_0203c9f4(s32, s32, s32);
void func_0203de9c(S16, u16, u16, s32, s32, s32, s32, A16, B8, s32);
extern u16 data_0211f9c8[];

void func_02072310(u8 *arg0) {
    S16 h;
    volatile s32 l1c;
    volatile s32 l20;
    volatile s32 l24;
    volatile s32 l28;
    A16 a;
    B8 b;
    volatile s32 l34;
    s32 v;
    u8 *pb;
    u16 *pa;
    s32 t;

    arg0[0x18]             = (u8) (arg0[0x18] + 0);
    v                      = ((arg0[0x18] * 2 + 2) * 8 - 8) << 12;
    l1c                    = v;
    l20                    = v;
    *(s32 *) (arg0 + 0x14) = v;
    t                      = *(s32 *) (arg0 + 0x14);
    l34                    = t;
    l24                    = t;
    if (*(s32 *) (arg0 + 0xc) > t) {
        l28                   = t;
        *(s32 *) (arg0 + 0xc) = t;
    }
    arg0[8] |= 1;

    h.v = data_0211f9c8[0];
    func_0203d208(2, h);
    func_0203cc08(2, 0x30);
    func_0203c9f4(2, 0x30, 0);
    pb    = (u8 *) &b;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    pa    = (u16 *) &a;
    pa[0] = 0;
    pa[1] = 0;
    func_0203de9c(h, *(u16 *) (arg0 + 4), *(u16 *) (arg0 + 6), 0, 1, 1, 0x6f, a, b, 2);
    arg0[8] |= 1;
    ((VA *) arg0)->f0();
    arg0[0x1c] = 0;
}
}
