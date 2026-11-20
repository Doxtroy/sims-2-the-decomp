/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 type;
    u16 val;
    u32 a;
    u32 b;
} Msg;

extern void *func_02104e78(void);
extern s32 func_02104d58(s32, s32, s32);
extern u16 func_02106abc(void *);

s32 func_02106e40(void (*cb)(Msg *)) {
    u8 *w;
    s32 r;
    u16 v;
    Msg m;

    w = func_02104e78();
    r = func_02104d58(2, 9, 10);
    if (r != 0) {
        return r;
    }
    if (*(s32 *) (w + 0x15c) == 0) {
        return 3;
    }
    v                    = func_02106abc(w + 0x160);
    *(s32 *) (w + 0x15c) = 0;
    m.val                = v;
    m.type               = 0x16;
    cb(&m);
    return 2;
}
