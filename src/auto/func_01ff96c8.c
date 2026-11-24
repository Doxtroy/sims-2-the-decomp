/* compiler: 1.2/sp2p3 -inline auto */
#include "m2c.h"

typedef struct Node {
    u8 pad[0xC];
    struct Node *next;
} Node;

s32 func_01ff96c8(void *self, Node *a, Node *b) {
    Node *n;
    if (a == NULL || b == NULL || (n = a->next) == NULL) {
        return 0;
    }
    if (n == b) {
        return 1;
    }
    return func_01ff96c8(self, n, b);
}
