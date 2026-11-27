/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
    u8 pad[0x1C];
} T;

extern s32 data_027e0000;
extern T data_0213d920[];
extern T data_0213d928[];

int func_020f6444(void *);
void func_020f6484(void *, s32);
void func_020f7c48(void *, s32, s32);
void func_01ffb1f0(s32);

s32 func_0204eb80(s32 p) {
    s32 cur = data_027e0000;

    if (data_0213d920[cur].v & 4) {
        s32 val = data_0213d928[cur].v;
        if (p == 0x3f) {
            if (cur == 0) {
                if (val != func_020f6444((void *) 0x400006c)) {
                    func_020f6484((void *) 0x400006c, val);
                }
            } else {
                if (val != func_020f6444((void *) 0x400106c)) {
                    func_020f6484((void *) 0x400106c, val);
                }
            }
        } else {
            if (cur == 0) {
                func_020f7c48((void *) 0x4000050, 1 << p, val);
            } else {
                func_020f7c48((void *) 0x4001050, 1 << p, val);
            }
        }
    }
    cur = data_027e0000;
    if (data_0213d928[cur].v != 0) {
        data_0213d928[cur].v += 2;
        if (data_0213d928[cur].v > 0) {
            data_0213d928[cur].v = 0;
        }
        func_01ffb1f0(data_0213d928[cur].v);
        return 1;
    }
    return 0;
}
