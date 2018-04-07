#include <stdlib.h>

#include "abv_list.h"

ABV_NODE* create_new_end_node(ABV const* abv)
{
    ABV_NODE *node = malloc(sizeof(ABV_NODE));
    set_abv(node, abv);
    set_next(node, NULL);
    return node;
}

ABV_LIST* create_list(ABV const* abv)
{
    return create_new_end_node(abv);
}

void destroy_list(ABV_LIST* list)
{
    free(list->next);
    free(list);
}

void extend_list(ABV_LIST* list, ABV const* abv)
{
    ABV_NODE *current = list;
    while (get_next(current) != NULL) {
        set_next(current, (const ABV_NODE *)current->next);
    }
    ABV_NODE *node = create_new_end_node(abv);
    set_next(current, node);
}
