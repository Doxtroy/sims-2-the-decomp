/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0xbc];
    u8 bc;
    u8 bd;
    u8 pad2[2];
    s32 c0;
    s32 c4;
    u8 pad3[4];
    u8 cc;
} Obj;

typedef struct {
    u8 pad[0xdac];
    Obj *obj;
} Game;

typedef struct {
    u8 pad[4];
    u8 b4;
} Mgr;

typedef struct {
    u8 pad[0x428];
    s32 state;
} Scr;

typedef struct {
    u8 pad[0x479c];
    Scr *scr;
} Eng;

typedef struct {
    u8 pad[0xa4];
    s32 a4;
} Cfg;

void func_020cc110(void);
s32 func_0204e1fc(Mgr *m, s32 a, s32 flag);
void func_0204e3dc(Mgr *m, s32 a, s32 b, s32 c, s32 d, void (*cb)(void));
void func_020586fc(Game *g);
extern Game *data_02139fa4;
extern Cfg data_0213d7b0;
extern Mgr *data_0213d868;
extern Eng *data_0213e434;

void func_020cc110(void) {
    Obj *o = data_02139fa4->obj;
    if (data_0213d868->b4 == 0) {
        o->cc                     = 1;
        data_0213e434->scr->state = 5;
        func_020586fc(data_02139fa4);
        return;
    }
    if (o->bd != 0 && o->bc != 0) {
        o->bd = 0;
        func_0204e3dc(data_0213d868, 3, data_0213d7b0.a4, o->c0, o->c4 + func_0204e1fc(data_0213d868, 2, 0), func_020cc110);
        return;
    }
    func_020586fc(data_02139fa4);
}
