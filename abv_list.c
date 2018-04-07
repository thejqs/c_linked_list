#include <stdlib.h>

#include "abv_list.h"

ABV_NODE* create_new_end_node(ABV const* abv)
{
    ABV_NODE *node = malloc(sizeof(ABV_NODE));
    set_abv(node, abv);
    set_next(node, NULL);
    return node;
}

void enumerate(ABV_LIST* list, ABV_ENUMERATE_FUNC func) {
    ABV_NODE *current = list;
    while (current != NULL) {
        func(&current->abv);
        current = (ABV_NODE *)get_next(current);
    }
}

ABV_LIST* create_list(ABV const* abv)
{
    return create_new_end_node(abv);
}

void destroy_list(ABV_LIST* list)
{
    ABV_NODE *head = list;
    ABV_NODE *current = head;
    while (head != NULL) {
        head = (ABV_NODE *)get_next(head);
        free(current);
        current = head;
    }
}

void extend_list(ABV_LIST* list, ABV const* abv)
{
    ABV_NODE *current = list;
    while (get_next(current) != NULL) {
        current = (ABV_NODE *)get_next(current);
    }
    ABV_NODE *node = create_new_end_node(abv);
    set_next(current, node);
}
