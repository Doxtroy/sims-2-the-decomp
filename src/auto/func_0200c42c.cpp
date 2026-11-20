/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3 &operator=(const Vec3 &b) {
        x = b.x;
        y = b.y;
        z = b.z;
        return *this;
    }
};

typedef struct VecFx32 {
    s32 x, y, z;
} VecFx32;

typedef struct MtxFx43 {
    s32 m[12];
} MtxFx43;

struct Node {
    VecFx32 pos;
    VecFx32 rot;
    VecFx32 scale;
    MtxFx43 mtx;
    VecFx32 pos2;
    u8 pad[4];
    u8 dirty;
};

struct Src {
    u8 pad[4];
    Vec3 pos;
    u8 pad2[0x18 - 0x10];
    Fx32 f18;
};

struct Out {
    u8 pad[4];
    Vec3 pos;
    u8 pad2[0x18 - 0x10];
    Fx32 f18;
};

extern "C" void func_020f57b4(MtxFx43 *);
extern "C" void func_020f5b94(MtxFx43 *, MtxFx43 *, s32, s32, s32);
extern "C" void func_01ffba84(MtxFx43 *, VecFx32 *);
extern "C" void func_01ffb98c(Vec3 *, MtxFx43 *, Vec3 *);

extern "C" void func_0200c42c(Out *out, void *unused, Src *src, Node *node) {
    Vec3 tmp;
    if (node->dirty == 1) {
        node->dirty = 0;
        func_020f57b4(&node->mtx);
        VecFx32 *sc = &node->scale;
        func_020f5b94(&node->mtx, &node->mtx, sc->x, sc->y, sc->z);
        func_01ffba84(&node->mtx, &node->rot);
        node->pos2.x = node->pos.x;
        node->pos2.y = node->pos.y;
        node->pos2.z = node->pos.z;
    }
    func_01ffb98c(&tmp, &node->mtx, &src->pos);
    out->pos = tmp;
    out->f18 = src->f18;
}
