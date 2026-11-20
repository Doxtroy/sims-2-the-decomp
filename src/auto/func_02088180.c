/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void *func_0209b724(void *);
void func_02046384(void *, s32, s32);
void func_02085f24(void *);
void *func_0204688c(s32, s32, s32);
void *func_02083380(void *);
extern u8 *data_0213e580;
extern void *data_0213e56c;
u8 *func_02088180(u8 *o) {
    void *p;
    func_0209b724(o);
    o[0xec] = 0;
    func_02046384(o + 0x6c, 0, 0x80);
    o[0xf0]             = 0;
    *(s32 *) (o + 0xf4) = 0x21;
    *(s32 *) (o + 0xf8) = 0;
    *(s32 *) (o + 0xfc) = 0;
    func_02085f24(o + 0x100);
    data_0213e580 = o;
    p             = func_0204688c(8, 3, 4);
    if (p != NULL) {
        p = func_02083380(p);
    }
    data_0213e56c = p;
    return o;
}
