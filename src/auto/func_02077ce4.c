/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_021071c8(void);
s32 func_0210734c(void);
s32 func_0210730c(void);
char *func_0210a628(char *dst, const char *src, u32 n);
char *func_0210a69c(char *dst, const char *src);
int func_0210a4fc(const char *a, const char *b);
char *func_02052258(s32 id);
s32 func_02051338(s32 a, s32 b, s32 c, char *s, s32 e);

s32 func_02077ce4(s32 *out, s32 show) {
    s32 code;
    char buf[16];
    char str[132];

    code = 0;
    if (func_021071c8() != 0 && func_0210734c() != 0) {
        code = func_0210730c();
    }
    func_0210a628(buf, (const char *) &code, 4);
    buf[4] = 0;
    func_0210a69c(str, func_02052258(0x999));
    if (func_0210a4fc(buf, str) == 0) {
        if (show) {
            *out = func_02051338(*out, 0x76, 0xad, func_02052258(0x998), 1);
        }
        return 1;
    }
    return 0;
}
