/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Resource020bc528 {
    void *data;
    u16 size;
    u16 id;
    u8 loaded;
} Resource020bc528;

void *func_0204456c(s32);
s32 func_0204439c(s32);

Resource020bc528 *func_020bc528(Resource020bc528 *res, s32 id) {
    res->data   = NULL;
    res->size   = 0;
    res->id     = 0xFFFF;
    res->loaded = 0;
    if (id != 0xFFFF) {
        void *data = func_0204456c(id);
        if (data != NULL) {
            res->size   = (func_0204439c(id) + 3) & ~3;
            res->data   = data;
            res->id     = id;
            res->loaded = 1;
        }
    }
    return res;
}
