/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213355c;
extern u8 *data_02139fa4;
void func_02067980(void *, void *);

void *func_0208b0e4(void *arg0) {
    s32 *q;
    s32 r2;
    u8 *g;
    void *o;
    u8 *p;
    p            = (u8 *) arg0;
    *(void **) p = &data_0213355c;
    q            = *(s32 **) (p + 4);
    g            = data_02139fa4;
    if (q != 0) {
        o = *(void **) (g + 0xDAC);
        if (o != 0) {
            r2 = *(s32 *) ((u8 *) o + 4);
        } else {
            r2 = 50;
        }
        if (r2 == 12) {
            func_02067980(o, q);
        }
    }
    q = *(s32 **) (p + 4);
    if (q != 0) {
        *(s32 *) ((u8 *) q + 0x130) = 0;
    }
    return arg0;
}
