#include <assert.h>
#include <stdlib.h>

#include "abv_node.h"

void set_abv(ABV_NODE* node, ABV const* abv)
{
    assert(node != NULL);
    assert(abv != NULL);
    node->abv = *abv;
}

ABV get_abv(ABV_NODE const* node)
{
    assert(node != NULL);
    return node->abv;
}

void set_next(ABV_NODE* node, ABV_NODE const* next)
{
    assert(node != NULL);
    node->next = (ABV_NODE *)next;
}

ABV_NODE const* get_next(ABV_NODE const* node)
{
    assert(node != NULL);
    return node->next;
}
