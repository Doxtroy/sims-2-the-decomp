/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Node {
    u8 *data;
    struct Node *next;
} Node;
Node *func_0204561c(void *);
u8 *func_0209b3e0(u8 *o, s32 type, u16 n) {
    u16 i = 0;
    Node *it;
    if (type == 0x12) {
        for (it = func_0204561c(o + 0x34); it != NULL; it = it->next) {
            u8 *d = it->data;
            if (n == i++) {
                return d;
            }
        }
    } else {
        for (it = func_0204561c(o); it != NULL; it = it->next) {
            if (it->data[0x18] == type) {
                if (n == i++) {
                    return it->data;
                }
            }
        }
    }
    return NULL;
}
