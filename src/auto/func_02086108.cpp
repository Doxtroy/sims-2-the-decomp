/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator-() const {
        return Fx32(-v);
    }
    Fx32 operator-(Fx32 b) const {
        return Fx32(v - b.v);
    }
    bool operator>=(Fx32 b) const {
        return v >= b.v;
    }
    bool operator<=(Fx32 b) const {
        return v <= b.v;
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
};

struct Box {
    Vec3 c;
    Vec3 h;
    u8 type;
};

struct Node {
    Box *box;
    Node *next;
};

struct Obj {
    u8 pad[0xc];
    u16 h0c;
    u8 pad2[0x78 - 0xe];
    Vec3 pos;
};

extern "C" {
s32 func_0209b378(s32);
Node *func_0204561c(s32);
void func_020643fc(u32, Box *);
void func_0209b74c(Box *);
extern u32 data_0213e434;

s32 func_02086108(s32 a, Obj *o) {
    bool flag = o->h0c == 1;
    Node *n   = func_0204561c(func_0209b378(a));
    if (n != NULL) {
        Vec3 *p = &o->pos;
        for (; n != NULL; n = n->next) {
            Box *b = n->box;
            Vec3 d(p->x - b->c.x, p->y - b->c.y, p->z - b->c.z);
            if (d.x >= -b->h.x && d.x <= b->h.x && d.y >= -b->h.y && d.y <= b->h.y && d.z >= -b->h.z && d.z <= b->h.z) {
                if (b->type == 0x12) {
                    func_020643fc(data_0213e434, b);
                } else if (b->type == 0x13 && flag) {
                    func_0209b74c(b);
                }
            }
        }
    }
    return 0;
}
}
