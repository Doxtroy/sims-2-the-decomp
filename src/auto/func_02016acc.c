/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct T {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} T;

typedef struct U {
    u16 pad0;
    u16 id;
} U;

typedef struct R {
    u8 pad[6];
    u16 count;
} R;

typedef struct S {
    u32 pad0;
    u32 flags;
    u8 pad8[0x10];
    T t;
    u8 pad1c[4];
    U *u;
    u16 h24;
    u16 pad26;
    s32 cnt28;
} S;

void func_0201691c(S *);
R *func_0204456c(u16);

static inline void upd(S *s) {
    T *t = &s->t;
    if (t->c != t->d || (s->flags & 0x80)) {
        s->flags |= 0x80;
    }
}

void func_02016acc(S *s) {
    R *r;
    u16 n;
    if (!(s->flags & 0x10)) {
        return;
    }
    if (s->t.a == 0) {
        return;
    }
    s->t.a--;
    if (s->t.a != 0) {
        return;
    }
    if (s->h24 == 0xFFFF) {
        s->t.d++;
        r = func_0204456c(s->u->id);
        if (s->t.d >= r->count) {
            s->t.d = 0;
            s->flags |= 0x400000;
        }
        n = r->count;
        if (n - 1 == s->t.d || n == 1) {
            s->flags |= 0x400000;
        }
        s->t.a = s->t.b;
        upd(s);
        return;
    }
    if (s->flags & 0x400000) {
        return;
    }
    s->cnt28++;
    func_0201691c(s);
    upd(s);
}
