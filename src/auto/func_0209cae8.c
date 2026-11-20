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
M2C_UNK func_02046384(void *, M2C_UNK, M2C_UNK);
void *func_02046880(M2C_UNK, M2C_UNK, M2C_UNK);
void *func_0204688c(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0209c3f4();
M2C_UNK func_020bbcf0(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32);
extern M2C_UNK data_02124820;
extern void *data_0213e598;
extern void *data_0213e59c;
void func_0209cae8(s32 arg0) {
    s32 var_ip;
    s32 var_r3;
    void *temp_r0;
    void *temp_r0_2;
    temp_r0       = func_0204688c(0xDC, 3, 4);
    data_0213e598 = temp_r0;
    func_02046384(temp_r0, 0, 0xDC);
    temp_r0_2     = func_02046880(0x1000, 3, 4);
    data_0213e59c = temp_r0_2;
    func_02046384(temp_r0_2, 0, 0x1000);
    *((s32 *) (((s8 *) data_0213e598) + 0xA8)) = arg0;
    func_020bbcf0((*((s32 *) (((s8 *) data_0213e598) + 0xA8))) + 0x1A4, 1, &data_02124820, 8, 0, 0);
    *((s8 *) (((s8 *) data_0213e598) + 0xC0)) = 2;
    *((s8 *) (((s8 *) data_0213e598) + 0xA6)) = 4;
    func_0209c3f4();
    *((s8 *) (((s8 *) data_0213e598) + 0x72)) = 5;
    var_ip                                    = 0;
    var_r3                                    = 0;
    do {
        var_ip += 1;
        *((s8 *) (((s8 *) (data_0213e598 + var_r3)) + 0x76)) = 4;
        var_r3 += 3;
    } while (var_ip < 0x10);
}
