/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

typedef struct {
    void *vt;
    s32 f4;
    void *a[6];
    void *b[6];
    void *f38;
    void *f3c;
} S;

extern "C" {
u16 func_02088240(s32);
void func_020b8d2c(void *);
void func_02046844(void *);
void func_020d9bd4(void *);
void func_020530f8(void *);
u16 func_0208826c(s32);
void func_020444f8(void);
extern u8 data_02132d98[];

void *func_02085424(S *arg0) {
    void *t;
    u16 i;

    arg0->vt = (void *) data_02132d98;
    for (i = 0; i < func_02088240(arg0->f4); i++) {
        if (arg0->a[i] != NULL) {
            if (arg0->a[i] != NULL) {
                ((VA *) arg0->a[i])->f1();
            }
            arg0->a[i] = NULL;
        }
        t = arg0->b[i];
        if (t != NULL) {
            if (t != NULL) {
                func_020b8d2c(t);
                func_02046844(t);
            }
            arg0->b[i] = NULL;
        }
    }
    t = arg0->f38;
    if (t != NULL) {
        if (t != NULL) {
            func_020d9bd4(t);
            func_02046844(t);
        }
        arg0->f38 = NULL;
    }
    t = arg0->f3c;
    if (t != NULL) {
        if (t != NULL) {
            func_020530f8(t);
            func_02046844(t);
        }
        arg0->f3c = NULL;
    }
    func_0208826c(arg0->f4);
    func_020444f8();
    arg0->f4 = 0x21;
    return arg0;
}
}
