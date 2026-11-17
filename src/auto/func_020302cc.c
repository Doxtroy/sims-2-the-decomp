/* compiler: 1.2/sp2p3 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 M2C_UNK;
typedef struct Sel {
    u8 pad[0x54];
    s32 n;
} Sel;
typedef struct G {
    Sel sel[8];
    u8 pad[0x2e0 - (8 * 0x58)];
    s32 cur;
    s32 ids[16];
} G;
extern u8 *data_0213e434;
void func_02018af8(void *, s32, s32, s32);
void func_02073c24(void *, s32);
s32 func_020302cc(u8 *o, s32 ev, u8 *arg) {
    s32 new_var;
    switch (ev) {
        case 10:
            func_02018af8(arg + 0x128, 0x10, *((s32 *) (o + 4)), 2);
            return 0;

        case 0: {
            G *g    = (G *) (data_0213e434 + 0x41f8);
            s32 key = *((s32 *) (o + 4));
            s32 n   = g->sel[g->cur].n;
            s32 i;
            for (i = 0; i < n; i++) {
                new_var = g->ids[i];
                if (new_var == key) {
                    goto found;
                }
            }

            i = -1;
        found:
            func_02073c24(g, i);

            *((u32 *) ((*((u8 **) (o + 4))) + 4)) |= 0x82;
            return 0;
        }
    }

    return 0;
}
