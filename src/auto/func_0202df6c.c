/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct T {
    u8 pad[0x10];
    s32 x10;
    s32 x14;
    u8 pad18[8];
} T;
typedef struct VT {
    void (*f0)(void *);
    void (*f1)(void *);
} VT;
typedef struct Obj {
    VT *vt;
} Obj;
extern u8 *data_02139fa4;
extern u8 *data_0213e580;
void *func_020379ac(void *);
void func_020117e8(s32, s32, T *, s32);
void func_02018acc(void *);
void func_0202df6c(u8 *o) {
    T t;
    Obj *p;
    if (o[0x2d] == 0) {
        return;
    }
    if (*(s32 *) (data_02139fa4 + 8) != 0) {
        return;
    }
    func_020379ac(&t);
    t.x10 = 7;
    t.x14 = 0xe;
    func_020117e8(*(s32 *) (data_0213e580 + 0xf8), 0x33, &t, 0);
    o[0x13] = 1;
    p       = *(Obj **) (*(u8 **) (o + 4) + 0x130);
    if (p != NULL) {
        if (p != NULL) {
            p->vt->f1(p);
        }
    }
    func_02018acc(&t);
}
