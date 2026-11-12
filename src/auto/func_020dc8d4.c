/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

typedef struct E {
    u8 p0[0x28];
    u32 f28;
    u8 *f2c;
    u32 f30;
    u8 *f34;
    u32 f38;
    s32 f3c;
    s32 f40;
    u8 p1[0x17c - 0x44];
} E;
typedef struct C {
    u8 p0[0xc];
    s32 fc;
    s32 f10;
    u8 p14[0x8];
    s32 f1c;
    s32 f20;
    s32 f24;
    u8 p28[0x8c];
    s32 fb4;
    s32 fb8;
    s32 fbc;
    s32 fc0;
    s32 fc4;
    u8 pc8[0x8];
    s32 fd0;
    u32 fd4;
    u8 pd8[0xc];
    u8 *fe4;
    s32 fe8;
    s32 *fec;
    u8 pf0[0x10];
    void (*f100)(void *);
    u8 p104[0xc];
    s32 f110;
    s32 f114;
    u8 p118[0x4];
    s32 f11c;
    u8 p120[0x4];
    s32 f124;
    s32 f128;
    s32 f12c;
    u8 p130[0x8];
    u32 f138;
    u32 f13c;
    u8 p140[0x104];
    s32 *f244;
    u8 p248[0x10];
    s32 f258;
    s32 f25c;
    s32 f260;
    s32 f264;
    s32 f268;
    u8 p26c[0x8];
    s32 f274;
    u8 p278[0x10];
    s32 f288;
    s32 f28c;
    u8 p290[0x4];
    s32 f294;
    s32 f298;
    s32 f29c;
    u8 p2a0[0x4];
    s32 f2a4;
    s32 f2a8;
    s32 f2ac;
    s32 f2b0;
    s32 *f2b4;
    s32 *f2b8;
    s32 *f2bc;
    s32 *f2c0;
    s32 *f2c4;
    s32 *f2c8;
    s32 *f2cc;
    u8 p2d0[0x4];
    s32 f2d4;
    u8 p2d8[0x4];
    s32 f2dc;
    s32 f2e0;
    u8 p2e4[0x4];
    s32 f2e8;
    u8 p2ec[0x4];
    E *f2f0;
    s32 f2f4;
    s32 f2f8;
    u8 p2fc[0x2c];
    s32 f328;
    u8 p32c[0x4];
    s32 f330;
} C;

void lbl_020dc1f4(C *, s32);
s32 func_020daea8(void);
s32 func_020daf90(s32, s32, s32);
void func_020de414(C *);
void func_020de448(C *);
void func_020df90c(s32, s32 *, u32 *, u8 *, u8 **);
s32 func_020e03c8(s32, s32, s32, u8 *, s32, u8 *, s32, s32);
void func_02108108(s32, s32, s32);
void func_0210816c(u8 *, u8 *, u32);

s32 func_020dc8d4(C *c) {
    s32 k;
    u8 *p;
    u32 n;
    s32 r4;
    u32 sz;
    s32 i;
    s32 t0;
    u8 *cur;
    u8 *outp;
    u32 outn;
    u32 avail;
    u32 d;
    u32 lim;
    E *e;
    s32 off;
    s32 zero;
    s32 neg;
    s32 ix;

    if (c == 0) {
        return 0;
    }
    if (c->f2d4 == c->fc) {
        return 0;
    }
    if (c->f2dc != 0) {
        c->f2dc = 0;
        if (c->f288 != 0) {
            lbl_020dc1f4(c, 0);
            lbl_020dc1f4(c, 1);
        }
        c->f268 = 0;
        c->f330 = 0;
        c->f328 = 0;
    }
    c->f2f8 = 0;
    c->f11c = 1;
    c->f260 = func_020daea8();
    r4      = c->f2b0;
    c->f2b0 = r4 - 1;
    if (c->f2b0 < 0) {
        c->f2b0 = c->f2ac - 1;
    }
    c->f2b4[c->f2b0] = c->f260;
    c->f2bc[c->f2b0] = c->f294;
    c->f2b8[c->f2b0] = c->f298;
    c->f2c0[c->f2b0] = c->f29c;
    c->f2c4[c->f2b0] = c->f124;
    c->f2c8[c->f2b0] = c->f128;
    c->f2cc[c->f2b0] = c->f12c;
    if (c->f25c == 0) {
        c->f2b4[r4] = c->f260 - func_020daf90(1000, c->f2a8, c->f2a4);
        c->f25c     = c->f260;
        c->f12c     = 0;
        c->f128     = 0;
    } else if (c->f2e8 != 0) {
        func_020de448(c);
    }
    c->f274 = c->f260;
    p       = c->fe4;
    if (c->f110 != 0) {
        c->f1c = 1;
    }
    if (c->f1c != 0) {
        return 1;
    }
    k    = 0;
    zero = 0;
    neg  = -1;
    if (c->fd0 > 0) {
        do {
            sz = *(s32 *) p;
            p += 4;
            i = zero;
            if (c->f2e8 > 0) {
                do {
                    if (k == c->f244[i]) {
                        goto found;
                    }
                    i++;
                } while (i < c->f2e8);
            }
            i = neg;
        found:
            if (i != -1 && sz != 0) {
                cur = p;
                n   = *(u32 *) p;
                cur = p + 4;
                if (n != 0) {
                    off = i * 0x17c;
                    do {
                        e     = (E *) (off + (u32) c->f2f0);
                        avail = e->f28 - e->f40;
                        func_020df90c(e->f3c, (s32 *) &outp, &outn, cur, &cur);
                        if (outn > n) {
                            outn = n;
                        }
                        n -= outn;
                        if (outn > avail) {
                            d = outn - avail;
                            e = (E *) (off + (u32) c->f2f0);
                            e->f38 += d;
                            e = (E *) ((u32) c->f2f0 + off);
                            e->f40 -= d;
                            e = (E *) (off + (u32) c->f2f0);
                            if (e->f38 > e->f30) {
                                e->f38 = e->f38 - e->f28;
                            }
                        }
                        e = (E *) ((u32) c->f2f0 + off);
                        e->f40 += outn;
                        e     = (E *) (off + (u32) c->f2f0);
                        t0    = (s32) e->f34;
                        avail = e->f30 - t0;
                        if (avail < outn) {
                            if (avail != 0) {
                                func_0210816c(e->f34, outp, avail);
                                outn -= avail;
                                outp += avail;
                            }
                            func_0210816c((u8 *) ((E *) (off + (u32) c->f2f0))->f2c, outp, outn);
                            e      = (E *) (off + (u32) c->f2f0);
                            e->f34 = e->f2c + outn;
                        } else {
                            func_0210816c(e->f34, outp, outn);
                            e      = (E *) (off + (u32) c->f2f0);
                            e->f34 = e->f34 + outn;
                        }
                    } while (n != 0);
                }
            }
            k++;
            p = p + sz;
        } while (k < c->fd0);
    }
    r4 = func_020daea8();
    if (c->f28c != 0 && c->fb8 != 0) {
        if (c->f2f4 == 0) {
            func_02108108(c->fbc, 0, c->fc4);
        }
        if (c->fe8 == 0 && c->f114 == 0) {
            lim = c->fd4;
            if (lim >= c->f138) {
                lim = *(volatile u32 *) &c->f138;
            }
            if (c->f13c < (lim * 3) >> 2) {
                c->f100((u8 *) c + 0xf0);
            }
        }
        ix      = c->fc - 1;
        c->f2e0 = func_020e03c8(c->fb8, c->fbc, c->fc0, p, c->fec[ix] & 1, (u8 *) c + 0x300, c->f20, c->f24);
    }
    if (c->f2e8 != 0) {
        func_020de448(c);
    }
    c->fb4  = -1;
    c->f258 = c->f258 + 1;
    func_020de414(c);
    t0      = func_020daea8();
    c->f264 = t0;
    c->f298 = c->f298 + (r4 - c->f260);
    c->f294 = c->f294 + (t0 - r4);
    c->f2d4 = c->fc;
    c->f10  = c->fc;
    c->f11c = 0;
    return 0;
}
