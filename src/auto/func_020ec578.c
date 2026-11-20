/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct NNSFndLink {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct NNSFndList {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
static inline NNSFndLink *GetLink(NNSFndList *list, void *obj) {
    return (NNSFndLink *) ((u32) obj + list->offset);
}
void func_020ec578(NNSFndList *list, void *object) {
    NNSFndLink *link = GetLink(list, object);
    link->nextObject = NULL;
    link->prevObject = NULL;
    list->headObject = object;
    list->tailObject = object;
    list->numObjects++;
}
