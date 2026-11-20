/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Node {
    struct Node *left;
    struct Node *right;
    u32 parent;
} Node;
typedef struct {
    Node *node;
} Iter;
typedef struct {
    s32 size;
    void *root;
    Iter begin;
} Tree;

void func_0204345c(Node *, void *);
void func_02046844(Node *);

void func_020432f8(Tree *t, volatile Iter it) {
    Node *n = it.node;
    if (n == t->begin.node) {
        Iter *b = &t->begin;
        Node *p = n->right;
        if (p != NULL) {
            Node *l = p->left;
            while (l != NULL) {
                p = l;
                l = l->left;
            }
            it.node = p;
        } else {
            Node *m = n;
            p       = (Node *) (m->parent & ~1);
            while (m != p->left) {
                it.node = p;
                m       = p;
                p       = (Node *) (m->parent & ~1);
            }
            it.node = p;
        }
        b->node = it.node;
    }
    func_0204345c(n, t->root);
    func_02046844(n);
    t->size--;
}
