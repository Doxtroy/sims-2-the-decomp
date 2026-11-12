/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef int s32;
typedef short s16;
extern void func_02046384(s32, s32, s32);
extern s32 func_0204ca70(s32);
extern u8 *func_02051d90(s32, void *);
extern void func_0209ba2c(s32, s32, void *, s32);
extern void func_0209bac8(s32, s32, void *, s32);
extern void func_0209bb64(void);
extern void func_0209bd04(void);
extern void func_0209c18c(void);
extern void func_0209c3f4(void);
extern void func_020bbde8(void *, s32, s32, s32, s32);
extern void func_020d5680(s32, void *);
extern u8 data_02124818[];
extern u8 data_02124828[];
extern u8 data_02124848[];
extern u8 data_02124858[];
extern u8 data_0212487c[];
extern u8 data_021248b0[];
extern u8 data_021248f0[];
extern u16 *data_02139e8c;
extern u8 *data_0213e434;
extern u8 *data_0213e598;
extern s32 data_0213e59c;

void func_0209c564(void) {
    s32 i;
    s32 off;
    u8 x;
    u8 *s;
    u8 x2;
    u8 *s2;
    u8 c2;
    s32 off2;
    s32 j;
    s32 off3;
    s32 k;
    u8 *q;
    u8 c;
    u16 pad;
    func_02046384(data_0213e59c, 0, 0x1000);
    if (data_0213e598[0xc1] != 0) {
        if (data_0213e598[0xc2] == 0) {
            data_0213e598[0xc2] = 0x1e;
        } else {
            data_0213e598[0xc2] = data_0213e598[0xc2] - 1;
            if (data_0213e598[0xc2] == 0) {
                data_0213e598[0xc1]             = 0;
                data_0213e598[0xa6]             = 4;
                *(s32 *) (data_0213e598 + 0xbc) = 0;
                func_0209c3f4();
                data_0213e598[0x72] = 5;
                i                   = 0;
                off                 = i;
                for (; i < 0x10; i++) {
                    (data_0213e598 + off)[0x76] = 4;
                    off += 3;
                }
            }
        }
    } else if (data_0213e598[0xd9] != 0) {
        data_0213e598[0xd9] = data_0213e598[0xd9] - 1;
        if (data_0213e598[0xd9] == 0) {
            func_0209c3f4();
        }
    } else {
        q = data_0213e598 + 0x70;
        if (q[2] == 5) {
            if (func_0204ca70(0x64) == 0) {
                q[2] = 4;
                q[1] = 8;
                if (func_0204ca70(1) == 0) {
                    q[0]                = 0;
                    data_0213e598[0xd8] = 2;
                } else {
                    q[0]                           = 0x70;
                    *(s8 *) (data_0213e598 + 0xd8) = -2;
                }
            }
        }
        {
            u32 k = data_02139e8c[1];
            if (k & 0x20) {
                u8 *pp = data_0213e598;
                if (pp[0xc0] > 2) {
                    pp[0xc0] = pp[0xc0] - 4;
                }
            } else if (k & 0x10) {
                u8 *pp = data_0213e598;
                if (pp[0xc0] < 0x74) {
                    pp[0xc0] = pp[0xc0] + 4;
                }
            }
        }
        if ((data_02139e8c[3] & 2) != 0) {
            q = data_0213e598 + 0xa4;
            if (q[2] == 4) {
                q[2] = 3;
                q[0] = data_0213e598[0xc0] + 3;
                q[1] = 0x70;
                func_020d5680(0x2d, *(u8 **) (data_0213e598 + 0xa8) + 0x78);
            }
        }
        func_0209bd04();
        func_0209c18c();
        func_0209bb64();
        if (*(u32 *) (data_0213e598 + 0xbc) > 0x186a0) {
            *(u32 *) (data_0213e598 + 0xbc) = 0x186a0;
        }
        if (data_0213e598[0xc3] == 0) {
            data_0213e598[0xd9] = 0x10;
        }
    }
    if (*(u32 *) (data_0213e598 + 0xbc) > *(u32 *) (data_0213e434 + 0x4000 + 0x67c)) {
        *(u32 *) (data_0213e434 + 0x467c) = *(u32 *) (data_0213e598 + 0xbc);
    }
    s = func_02051d90(*(s32 *) (data_0213e598 + 0xbc) * 10, data_0213e598 + 0xac);
    x = 2;
    for (c = *s; c != 0; c = *++s) {
        if ((s32) c >= 0x30 && (s32) c <= 0x39) {
            func_0209ba2c(x, 2, data_0212487c + (c - 0x30) * 5, 1);
            x = x + 4;
        }
    }
    s2 = func_02051d90(*(s32 *) (data_0213e434 + 0x4000 + 0x67c) * 10, data_0213e598 + 0xac);
    x2 = 0x4b;
    for (c2 = *s2; c2 != 0; c2 = *++s2) {
        if ((s32) c2 >= 0x30 && (s32) c2 <= 0x39) {
            func_0209ba2c(x2, 2, data_0212487c + (c2 - 0x30) * 5, 1);
            x2 = x2 + 4;
        }
    }
    if (data_0213e598[0xc1] != 0) {
        func_0209bac8(data_0213e598[0xc0], 0x70, data_02124828, 1);
    } else {
        func_0209bac8(data_0213e598[0xc0], 0x70, data_02124858, 2);
    }
    if (data_0213e598[0xa6] != 4) {
        q = data_0213e598 + 0xa4;
        if (q[2] == 2) {
            func_0209bac8((u8) (q[0] - 1), q[1], data_021248b0 + (q[1] & 3) * 16, 1);
        } else {
            func_0209bac8(q[0], q[1], data_02124848, 1);
        }
    }
    j    = 0;
    off2 = j;
    for (; j < 0x1d; j++) {
        u8 *e = data_0213e598 + off2;
        c     = e[2];
        if (c != 5) {
            if (c == 6) {
                func_0209bac8(e[0], e[1], data_02124828, 1);
            } else {
                func_0209bac8(e[0], e[1], data_021248f0 + c * 0x30 + (data_0213e598 + c)[0xc9] * 16, data_02124818[c]);
            }
        }
        off2 += 4;
    }
    k    = 0;
    off3 = k;
    for (; k < 0x10; k++) {
        u8 *e = data_0213e598 + 0x74 + off3;
        if (e[2] != 4) {
            if (e[2] == 2) {
                func_0209bac8((u8) (e[0] - 1), e[1], data_021248b0 + (e[1] & 3) * 16, 1);
            } else {
                func_0209bac8(e[0], e[1], data_02124848, 1);
            }
        }
        off3 += 3;
    }
    func_020bbde8(*(u8 **) (data_0213e598 + 0xa8) + 0x1a4, 1, data_0213e59c, 0x1000, 0);
}
