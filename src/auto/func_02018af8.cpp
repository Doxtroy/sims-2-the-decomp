/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual s32 f7(s32, s32);
    virtual VA **f8(VA *, s32);
    virtual VA **f9(VA *, s32);
};

extern "C" {
VA **func_02045614(VA *);
VA **func_0204561c(VA *);

void func_02018af8(VA **arg0, s32 arg1, s32 arg2, s32 arg3) {
    VA **cur;
    VA **next;
    s32 f2;
    s32 f1;

    f2 = arg3 & 2;
    if (f2 != 0) {
        cur = func_0204561c(*arg0);
    } else {
        cur = func_02045614(*arg0);
    }
    if (cur == NULL) {
        return;
    }
    f1 = arg3 & 1;
    do {
        if (f2 != 0) {
            next = (*arg0)->f8((VA *) cur, 0);
        } else {
            next = (*arg0)->f9((VA *) cur, 0);
        }
        if ((*cur)->f7(arg1, arg2) == 2 && f1 == 0) {
            return;
        }
        cur = next;
    } while (cur != NULL);
}
}
