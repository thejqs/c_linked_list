#ifndef __ABV_NODE_H__
#define __ABV_NODE_H__

#include "abv.h"

typedef struct
{
    ABV abv;
    struct ABV_NODE* next;
} ABV_NODE;

void set_abv(ABV_NODE* node, ABV const* abv);
ABV get_abv(ABV_NODE const* node);

void set_next(ABV_NODE* node, ABV_NODE const* next);
struct ABV_NODE const* get_next(ABV_NODE const* node);

#endif
