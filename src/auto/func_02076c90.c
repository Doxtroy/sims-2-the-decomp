/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Word0213e584 {
    s32 value;
} Word0213e584;

extern u8 *data_0213e580;
extern u8 *data_0213e434;
extern Word0213e584 data_0213e584;
void func_0207202c(void *);
void func_02087f18(void *);
void func_0208ab54(void *, s32, Word0213e584);
void func_0208a13c(void *);
void func_020d5570(void);

void func_02076c90(u8 *obj) {
    func_0207202c(obj + 0x24);
    func_02087f18(data_0213e580);
    func_0208ab54(data_0213e434 + 0x4648, 1, data_0213e584);
    func_0208a13c(data_0213e434 + 0x4648);
    func_020d5570();
}
