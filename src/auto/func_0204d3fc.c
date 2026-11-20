/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0213d7b0 {
    s32 unk0;
    u32 now;
    u8 unk8[0xA0];
    u32 start;
    u32 unkAC;
    u32 elapsed;
    u32 percent;
} Unk0213d7b0;

extern Unk0213d7b0 data_0213d7b0;

void func_0204d3fc(void) {
    data_0213d7b0.start   = data_0213d7b0.now;
    data_0213d7b0.unkAC   = 0;
    data_0213d7b0.elapsed = data_0213d7b0.now - data_0213d7b0.start;
    data_0213d7b0.percent = data_0213d7b0.elapsed * 100 / 2720;
}
