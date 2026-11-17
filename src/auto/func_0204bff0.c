/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Word0204bff0 {
    s32 value;
} Word0204bff0;

void *func_0204688c(s32, s32, s32);
void func_0204c5a4(void *, s32, s32, Word0204bff0, s32);

void func_0204bff0(s32 arg0, s32 arg1, s32 arg2, Word0204bff0 arg3, s32 arg4) {
    void *p = func_0204688c(0x28, 3, 4);
    if (p == NULL) {
        return;
    }
    func_0204c5a4(p, arg1, arg2, arg3, arg4);
}
