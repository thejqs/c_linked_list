#include "abv.h"
#include "abv_node.h"

typedef ABV_NODE ABV_LIST;

ABV_LIST* create_list(ABV const* abv);
void destroy_list(ABV_LIST* list);
void extend_list(ABV_LIST* list, ABV const* abv);
