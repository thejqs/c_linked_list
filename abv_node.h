#ifndef __ABV_NODE_H__
#define __ABV_NODE_H__

#include "abv.h"

struct abv_node
{
    ABV abv;
    struct abv_node* next;
};

typedef struct abv_node ABV_NODE;

void set_abv(ABV_NODE* node, ABV const* abv);
ABV get_abv(ABV_NODE const* node);

void set_next(ABV_NODE* node, ABV_NODE const* next);
ABV_NODE const* get_next(ABV_NODE const* node);

#endif
