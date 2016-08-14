#include <stdlib.h>

#include "abv_list.h"

ABV_LIST* create_list(ABV const* abv)
{
    ABV_NODE* head = malloc(sizeof(ABV_NODE));
    set_abv(head, abv);
    set_next(head, NULL);
    return head;
}

void destroy_list(ABV_LIST* list)
{
    free(list);
}
