/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Col {
    u8 r, g, b, a;
} Col;

typedef struct Arg {
    s32 f0;
    s32 val;
    u8 pad8[0x2c - 0x8];
    s32 kind;
} Arg;

typedef struct Group {
    Col e[14];
    s32 counts[7];
    s32 n;
} Group;

typedef struct Obj {
    Group g[8];
    u8 pad2c0[0x2e0 - 0x2c0];
    s32 cur;
    s32 vals[1];
} Obj;

void func_02073cd0(Obj *o, Col c, Arg *a) {
    Group *g      = &o->g[o->cur];
    Col *e        = &g->e[g->n];
    e->r          = c.r;
    e->g          = c.g;
    e->b          = c.b;
    e->a          = c.a;
    o->vals[g->n] = a->val;
    g->counts[a->kind]++;
    g->n++;
}
