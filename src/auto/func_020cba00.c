/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8Quad;

extern u8 data_021424c4;
extern s32 data_021424d0;
extern u8 data_021424c0;
extern u16 data_021424cc;
extern u8 data_021424c8;
extern u16 data_021278c4;
extern u16 data_021278c8;
extern u8 *data_0213e434;
extern u8 data_0212792c;
extern u8 data_0212790c;
extern u8 data_021278f4;

extern void func_0203cfb0(s32);
extern void func_0203c540(void);
extern void func_0203cec4(s32);
extern void func_0203d208(s32, U16One);
extern void func_0203cc08(s32, s32);
extern U16Pair func_0203e23c(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);
extern void func_02051b80(U16One);
extern void func_02050630(s32, s32, s32);
extern void func_02051a50(s32, s32, s32);
extern s32 func_02052258(s32);
extern s32 func_02051338(s32, s32, s32, s32, s32);
extern void func_020c99d0(void *);
extern void func_020c9694(void *);
extern void func_020ca5bc(void *);
extern void func_020ca0f4(void *);
extern u8 *func_0204688c(s32, s32, s32);
extern u8 *func_020170c4(u8 *, s32);
extern void func_02049b00(u8 *, s32);
extern void func_02016708(u8 *, void *);
extern void func_020168a4(u8 *, s32);
extern s32 func_020c8490(void);
extern void func_020165bc(u8 *, s32);

void func_020cba00(u8 *a) {
    u8 fr[0x3c];
    u8 *pb;
    u16 *ph;
    u8 *o;
    s32 h;

    if (a[0x31] == 1) {
        a[0x31]             = 0;
        *(s32 *) (a + 0x24) = 0;
        data_021424c4       = 0;
        data_021424d0       = 0;
        data_021424c0       = 0;
        data_021424cc       = 0;
        data_021424c8       = 0;
    }
    func_0203cfb0(0);
    func_0203c540();
    func_0203cec4(0x1000);
    func_0203d208(1, *(U16One *) &data_021278c4);
    func_0203cc08(1, 0);
    pb    = fr + 0x38;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) (fr + 0x34);
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(1, 0x21f3, 1, 0, 0, 0x100, *(U16Pair *) (fr + 0x34), *(U8Quad *) (fr + 0x38), 0);
    *(u16 *) (fr + 0) = data_021278c8;
    func_0203d208(0, *(U16One *) (fr + 0));
    func_0203cc08(0, 0);
    func_02051b80(*(U16One *) (fr + 0));
    func_02050630(0x20, 0, 1);
    func_02051a50(3, 0, 0);
    switch (*(s32 *) (a + 0x24)) {
        case 0:
            func_02051338(1, 0x7f, 0xc, func_02052258(0x7ea), 1);
            h = func_02051338(0x29, 0x2f, 0x32, func_02052258(0x802), 0);
            h = func_02051338(h, 0x2f, 0x52, func_02052258(0x801), 0);
            h = func_02051338(h, 0x2f, 0x72, func_02052258(0x800), 0);
            func_02051338(h, 0x2f, 0x92, func_02052258(0x7ec), 0);
            func_020c99d0(a);
            break;
        case 1:
        case 2:
        case 3:
            func_0203cc08(0, 0);
            h = *(s32 *) (*(u8 **) (data_0213e434 + 0x4000 + 0x79c) + 0x228);
            switch (h) {
                case 0:
                    h = 0x805;
                    break;
                case 1:
                    h = 0x806;
                    break;
                default:
                    h = 0x804;
                    break;
            }
            func_02051338(1, 0x7f, 0xc, func_02052258(h), 1);
            data_021424c8       = 0;
            *(u16 *) (a + 0x2c) = 0;
            func_020c9694(a);
            break;
        case 4:
            func_020ca5bc(a);
            break;
        case 5:
            func_020ca0f4(a);
            break;
    }
    *(s32 *) (fr + 0x8)  = 0xb0000;
    *(s32 *) (fr + 0x20) = 0xb0000;
    *(s32 *) (fr + 0x4)  = 0;
    *(s32 *) (fr + 0x1c) = 0;
    o                    = func_0204688c(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (a + 0x40) = o;
    func_02049b00(*(u8 **) (a + 0x40), 2);
    func_02016708(*(u8 **) (a + 0x40), &data_0212792c);
    *(s32 *) (*(u8 **) (a + 0x40) + 0x50) = *(s32 *) (fr + 0x1c);
    *(s32 *) (*(u8 **) (a + 0x40) + 0x54) = *(s32 *) (fr + 0x20);
    func_020168a4(*(u8 **) (a + 0x40), 1);
    o                    = *(u8 **) (a + 0x40);
    *(u32 *) (o + 4)     = *(u32 *) (o + 4) | 0x10;
    *(s32 *) (fr + 0x10) = 0xac000;
    *(s32 *) (fr + 0x28) = 0xac000;
    *(s32 *) (fr + 0xc)  = 0xee000;
    *(s32 *) (fr + 0x24) = 0xee000;
    o                    = func_0204688c(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (a + 0x44) = o;
    func_02049b00(*(u8 **) (a + 0x44), 1);
    func_02016708(*(u8 **) (a + 0x44), &data_0212790c);
    *(s32 *) (*(u8 **) (a + 0x44) + 0x50) = *(s32 *) (fr + 0x24);
    *(s32 *) (*(u8 **) (a + 0x44) + 0x54) = *(s32 *) (fr + 0x28);
    func_020168a4(*(u8 **) (a + 0x44), 1);
    o                    = *(u8 **) (a + 0x44);
    *(u32 *) (o + 4)     = *(u32 *) (o + 4) & ~1;
    *(s32 *) (fr + 0x18) = 0xac000;
    *(s32 *) (fr + 0x30) = 0xac000;
    *(s32 *) (fr + 0x14) = 0xee000;
    *(s32 *) (fr + 0x2c) = 0xee000;
    o                    = func_0204688c(0x74, 0, 4);
    if (o != 0) {
        o = func_020170c4(o, 0);
    }
    *(u8 **) (a + 0x48) = o;
    func_02049b00(*(u8 **) (a + 0x48), 4);
    func_02016708(*(u8 **) (a + 0x48), &data_021278f4);
    *(s32 *) (*(u8 **) (a + 0x48) + 0x50) = *(s32 *) (fr + 0x2c);
    *(s32 *) (*(u8 **) (a + 0x48) + 0x54) = *(s32 *) (fr + 0x30);
    func_020168a4(*(u8 **) (a + 0x48), 1);
    if (*(s32 *) (data_0213e434 + 0x4000 + 0x79c) == 0) {
        return;
    }
    *(s32 *) (a + 0x34) = 0;
    *(s32 *) (a + 0x34) = *(s32 *) (a + 0x34) + 1;
    *(s32 *) (a + 0x34) = 0;
    *(s32 *) (a + 0x3c) = func_020c8490();
    func_020165bc(*(u8 **) (a + 0x40), (*(s32 *) (a + 0x3c) + 1) & 0xff);
}
