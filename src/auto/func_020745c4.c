/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 func_02052288(void);
int func_0210823c(char *, const char *, ...);
s32 func_020f5cc0(s32, s32);
extern char data_0211fb00[];
extern char data_021327b8[];

void func_020745c4(char *out, s32 value) {
    char buf[12];
    char *p  = buf;
    char sep = data_0211fb00[func_02052288()];
    s32 len  = func_0210823c(p, data_021327b8, value);
    s32 n    = func_020f5cc0(len, 3);
    if (n == 0) {
        n = 3;
    }
    while (n-- != 0) {
        *out++ = *p++;
        len--;
    }
    while (len != 0) {
        *out++ = sep;
        *out++ = *p++;
        *out++ = *p++;
        *out++ = *p++;
        len -= 3;
    }
    *out = 0;
}
