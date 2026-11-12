/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};
extern "C" {
void func_020117e8(...);
void func_02018acc(...);
void func_020379ac(...);
extern void *data_02139fa4;
extern void *data_0213e580;
void func_0202df6c(void *arg0) {
    s32 buf[8];
    VA *o;
    s32 a;
    s32 b;
    if (*(u8 *) ((u8 *) arg0 + 0x2D) == 0) {
        return;
    }
    if (*(s32 *) ((u8 *) data_02139fa4 + 8) != 0) {
        return;
    }
    func_020379ac(buf);
    a      = 7;
    b      = 14;
    buf[4] = a;
    buf[5] = b;
    func_020117e8(*(s32 *) ((u8 *) data_0213e580 + 0xF8), 0x33, buf, 0);
    *(s8 *) ((u8 *) arg0 + 0x13) = 1;
    o                            = *(VA **) ((u8 *) (*(void **) ((u8 *) arg0 + 4)) + 0x130);
    if (o != NULL) {
        if (o != NULL) {
            o->f1();
        }
    }
    func_02018acc(buf);
}
}
