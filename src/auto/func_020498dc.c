/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
extern u8 data_0213d56c;
extern u8 data_0213d570;
extern s32 data_027e0000;

void func_020498dc(u8 *arg0) {
    u32 flags;
    u32 q;
    s32 b;
    s32 i;
    u8 *t;
    q = *(u32 *) (arg0 + 4) & 0x8000000;
    if (q == 0) {
        return;
    }
    if (q == 0) {
        return;
    }
    *(u32 *) (arg0 + 4) &= ~0x8000000;
    b = data_027e0000 * 0xc4;
    i = ((u32) (*(u32 *) (arg0 + 0x14) << 16) >> 28) * 0xc;
    t = &data_0213d570 + b;
    if (((volatile u8 *) i)[(s32) t] == 0) {
        return;
    }
    *(u8 *) (t + i) = *(u8 *) (t + i) - 1;
    if (*(u8 *) (t + i) != 0) {
        return;
    }
    if (!(*(u8 *) (i + (&data_0213d570 + 1 + b)) & 2)) {
        *(u16 *) (i + (&data_0213d56c + b)) = 0xff;
    }
}
