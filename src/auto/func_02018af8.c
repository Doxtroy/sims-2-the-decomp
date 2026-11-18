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
void ***func_02045614(void **);
void ***func_0204561c(void **);
void func_02018af8(void ***arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    void **temp_r0_3;
    void **temp_r0_2;
    void ***var_r8;
    void ***var_r7;
    s32 temp_r6;
    int new_var;
    void ***new_var2;
    void **temp_r0;
    temp_r6 = arg3 & 2;
    if (temp_r6 != 0) {
        new_var2 = func_0204561c(*arg0);
        var_r7   = new_var2;
    } else {
        var_r7 = func_02045614(*arg0);
    }
    if (var_r7 == ((void *) 0)) {
        return;
    }
loop_6:
    if (temp_r6 != 0) {
        temp_r0 = *arg0;
        var_r8  = (*((void ***(**) (void **, void ***, M2C_UNK))(((s8 *) (*temp_r0)) + 0x20)))(temp_r0, var_r7, 0);
    } else {
        temp_r0_2 = *arg0;
        var_r8    = (*((void ***(**) (void **, void ***, M2C_UNK))(((s8 *) (*temp_r0_2)) + 0x24)))(temp_r0_2, var_r7, 0);
    }

    new_var   = arg3 & 1;
    temp_r0_3 = *var_r7;
    if (((*((s32(**)(void **, M2C_UNK, M2C_UNK))(((s8 *) (*temp_r0_3)) + 0x1C)))(temp_r0_3, arg1, arg2) == 2) && (!new_var)) {
        return;
    }
    var_r7 = var_r8;
    if (var_r8 == ((void *) 0)) {
        return;
    }
    goto loop_6;
}
