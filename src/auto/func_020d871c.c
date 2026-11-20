/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Cfg {
    u8 type;
    s32 a;
    s32 b;
} Cfg;

typedef struct Cam {
    s32 x;
    s32 y;
    s32 z;
    u8 pad[0x20];
    u8 active;
    u8 pad2[3];
} Cam;

typedef struct G {
    s32 x0;
    s32 x4;
    u8 pad[0x590 - 8];
    Cfg cfg;
    u8 buf[0x20];
    Cam cam[2];
} G;

extern G data_02142848;
extern u8 data_02136bc0[];
extern u8 data_02142de4[];
extern u8 data_02142dd8[];
u8 *func_020462cc(u8 *, u8 *, u32);
void func_020d81c4(u8 *);

void func_020d871c(Cfg cfg) {
    data_02142848.cfg.type      = cfg.type;
    data_02142848.cfg.a         = cfg.a;
    data_02142848.cfg.b         = cfg.b;
    data_02142848.cam[0].active = 1;
    data_02142848.cam[0].x      = data_02142848.x0;
    data_02142848.cam[0].y      = data_02142848.x4;
    data_02142848.cam[0].z      = 0x800;
    data_02142848.cam[1].active = 1;
    data_02142848.cam[1].x      = data_02142848.x0 + 0x1000;
    data_02142848.cam[1].y      = data_02142848.x4;
    data_02142848.cam[1].z      = 0x800;
    if (data_02142848.cfg.type < 2) {
        func_020462cc(data_02142de4, data_02136bc0 + data_02142848.cfg.type * 0x20, 0x20);
    } else if (data_02142848.cfg.type < 7) {
        func_020d81c4(data_02142dd8);
    }
}
