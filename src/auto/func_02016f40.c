/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Word02016f40 {
    s32 value;
} Word02016f40;

void *func_0204688c(s32, s32, s32);
void *func_020170c4(void *, s32);
void func_02016da4(void **, s32, s32, Word02016f40, s32, u8);

void func_02016f40(void **out, s32 arg1, s32 arg2, Word02016f40 arg3, s32 arg4, u8 arg5) {
    void *p = func_0204688c(0x74, 0, 4);
    if (p != NULL) {
        p = func_020170c4(p, 0);
    }
    *out = p;
    func_02016da4(out, arg1, arg2, arg3, arg4, arg5);
}
