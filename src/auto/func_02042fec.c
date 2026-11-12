/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_020430dc(void *, void *);
extern void *func_020433b8(void *, void *, s32, void *);
extern s32 func_02043194(void *);
extern s32 func_020430e4(s32, void *, void *);
extern void **func_020430fc(void **);
extern void **func_02043168(void *);
extern void func_0204345c(void *, void *);
extern void *func_02043190(void *);
extern void func_02043170(void *, void *);
extern void *func_02043188(void *);
extern void func_02043174(void *, void *, s32);
extern void **func_02043184(void *);

s32 func_02042fec(void *arg0, void *arg1) {
    void *loc[2];
    void *r4;
    void **lp;
    void *f8;
    s32 r2;
    r2 = func_020430dc(arg0, arg1);
    r4 = func_020433b8(arg0, arg1, r2, (u8 *) arg0 + 4);
    if (r4 == (u8 *) arg0 + 4 || func_020430e4(func_02043194(arg0), arg1, (u8 *) r4 + 0xC) != 0) {
        r4 = (u8 *) arg0 + 4;
    }
    if (r4 == (u8 *) arg0 + 4) {
        return 0;
    }
    loc[0] = r4;
    loc[1] = r4;
    lp     = &loc[1];
    f8     = *(void **) ((u8 *) arg0 + 8);
    if (r4 == f8) {
        *(void **) ((u8 *) arg0 + 8) = *func_020430fc(lp);
    }
    func_0204345c(r4, *func_02043168(arg0));
    func_02043170(func_02043190(arg0), (u8 *) r4 + 0xC);
    func_02043174(func_02043188(arg0), r4, 1);
    {
        void **p = func_02043184(arg0);
        *p       = (void *) ((s32) *p - 1);
    }
    return 1;
}
