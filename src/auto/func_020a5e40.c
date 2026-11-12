/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a, b;
} A16;
typedef struct {
    u16 a;
} S16;
typedef struct {
    u16 a, b, c;
} T6;

s32 func_0204f700(s32, A16, void *, s32, s32 *);
void func_02051b80(S16);
void func_02051a50(s32, s32, s32);
s32 func_02052258(u16);
s32 func_02051338(s32, s32, s32, s32, s32);
void func_020a507c(u8 *);
void func_02048108(s32, s32, s32, s32, s32, s32);
void func_020aaab8(u8 *, s32, s32);
s32 func_020a8acc(u8 *, s32);
void func_020d8a70(s32);
extern u16 data_0212555c;
extern u8 data_02125574[];
extern u8 data_02134ee4[];
extern s32 data_02139fa4;
extern s32 data_0213d95c;

void func_020a5e40(u8 *arg0) {
    s32 sel;
    s32 flags;
    s32 v;
    s32 y;
    s32 i;
    s32 x;
    T6 tbl;
    T6 tbl2;
    T6 tbl3;
    s32 za;
    s32 zb;
    s32 c60;
    s32 za2;
    s32 zb2;
    s32 c602;
    s32 za3;
    s32 zb3;
    s32 r;
    s32 t;
    s32 t0;
    u8 *p;
    u8 *q;

    A16 key = *(A16 *) (arg0 + 0x8da);
    if (func_0204f700(data_0213d95c, key, data_02125574, 3, &sel) == 0) {
        sel = 3;
    }
    flags = arg0[0x8de];
    if (flags & 2) {
        v = sel;
        if (v == 3) {
            return;
        }
        tbl = *(T6 *) data_02134ee4;
        y   = 0x40;
        func_02051b80(*(S16 *) &data_0212555c);
        i   = 0;
        x   = 0x56;
        za  = 0;
        zb  = 0;
        c60 = 0x60;
        do {
            func_02051a50(3, i == v ? 3 : za, zb);
            r = func_02052258(((u16 *) &tbl)[i]);
            y = func_02051338(y, x, c60, r, 1);
            x += 0x2a;
            i++;
        } while (i < 3);
        arg0[0xa59] = sel;
        arg0[0xa5a] = sel;
        return;
    }
    if (flags & 1) {
        if (sel != arg0[0xa5a]) {
            v = arg0[0xa59];
            if (sel != v) {
                v = 3;
            }
            tbl2 = *(T6 *) data_02134ee4;
            y    = 0x40;
            func_02051b80(*(S16 *) &data_0212555c);
            i    = 0;
            x    = 0x56;
            za2  = 0;
            zb2  = 0;
            c602 = 0x60;
            do {
                func_02051a50(3, i == v ? 3 : za2, zb2);
                r = func_02052258(((u16 *) &tbl2)[i]);
                y = func_02051338(y, x, c602, r, 1);
                x += 0x2a;
                i++;
            } while (i < 3);
        }
        arg0[0xa5a] = sel;
        return;
    }
    if ((flags & 4) == 0) {
        return;
    }
    v = arg0[0xa59];
    if (v != 3 && arg0[0xa5a] == v) {
        y = 0x40;
        if ((arg0[0xa52] & 0x20) == 0) {
            arg0[0xa52] |= 1;
        }
        tbl3 = *(T6 *) data_02134ee4;
        func_02051b80(*(S16 *) &data_0212555c);
        i   = 0;
        x   = 0x56;
        za3 = 0;
        zb3 = 0;
        do {
            func_02051a50(3, i == 3 ? 3 : za3, zb3);
            r = func_02052258(((u16 *) &tbl3)[i]);
            y = func_02051338(y, x, 0x60, r, 1);
            x += 0x2a;
            i++;
        } while (i < 3);
        switch (arg0[0xa59]) {
            case 0:
                *(u16 *) (arg0 + 0xa4c) = 0;
                *(u16 *) (arg0 + 0xa4e) = 0;
                func_020a507c(arg0);
                func_02048108(data_02139fa4, 0x13, 1, *(s32 *) (arg0 + 8), *(s32 *) (arg0 + 0x8c0), 0);
                break;
            case 1:
                *(u16 *) (arg0 + 0xa4c)                   = 0;
                *(u16 *) (arg0 + 0xa4e)                   = 0;
                *(u8 **) (*(u8 **) (arg0 + 0x99c) + 0x14) = *(u8 **) (*(u8 **) (arg0 + 0x9a8) + 0x10);
                *(u16 *) (arg0 + 0x8e0)                   = **(u8 **) (*(u8 **) (arg0 + 0x99c) + 0x14) + 1;
                p                                         = *(u8 **) (arg0 + 0x99c);
                *(u8 **) (p + 0x14)                       = *(u8 **) (p + 0x14) + 1;
                arg0[0x8e6]                               = 0;
                arg0[0x8e9]                               = 0;
                i                                         = 0;
                do {
                    p        = arg0 + i;
                    p[0xa60] = 0xd;
                    i++;
                    p[0x8e3] = 0xd;
                } while (i < 3);
                arg0[0xa52] = arg0[0xa52] & ~0x50;
                arg0[0xa6c] = arg0[0xa6c] | 4;
                func_020aaab8(arg0, 0, 0);
                break;
            case 2:
                if (arg0[0xa52] & 0x10) {
                    *(u8 **) (*(u8 **) (arg0 + 0x99c) + 0x14) = *(u8 **) (*(u8 **) (arg0 + 0x9a8) + 0x10);
                    *(u16 *) (arg0 + 0x8e0)                   = **(u8 **) (*(u8 **) (arg0 + 0x99c) + 0x14) + 1;
                    p                                         = *(u8 **) (arg0 + 0x99c);
                    *(u8 **) (p + 0x14)                       = *(u8 **) (p + 0x14) + 1;
                    arg0[0x8e6]                               = 0;
                    arg0[0x8e9]                               = 0;
                    i                                         = 0;
                    do {
                        q        = arg0 + i;
                        q[0xa60] = 0xd;
                        i++;
                        q[0x8e3] = 0xd;
                    } while (i < 3);
                    arg0[0xa52] = arg0[0xa52] & ~0x50;
                    arg0[0xa6c] = arg0[0xa6c] | 4;
                    return;
                }
                func_020a8acc(arg0, 1);
                return;
        }
        t = arg0[0xa52];
        if ((t & 0x20) == 0) {
            if (arg0[0xa6c] & 1) {
                ((volatile u8 *) arg0)[0xa52] = t & ~8;
                ((volatile u8 *) arg0)[0xa52] = ((volatile u8 *) arg0)[0xa52] | 0x20;
                x                             = ((volatile u8 *) arg0)[0xa52] & 8;
                if (x == 0) {
                    do {
                        func_020d8a70(x);
                        x = ((volatile u8 *) arg0)[0xa52] & 8;
                    } while (x == 0);
                }
                ((volatile u8 *) arg0)[0xa52] = ((volatile u8 *) arg0)[0xa52] & ~0x20;
                arg0[0xa6c]                   = arg0[0xa6c] & ~1;
            }
            ((volatile u8 *) arg0)[0xa52] = ((volatile u8 *) arg0)[0xa52] & ~1;
        }
    }
    arg0[0xa59] = 3;
    arg0[0xa5a] = 3;
}
