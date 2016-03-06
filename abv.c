#include <stdlib.h>
#include <string.h>
#include "abv.h"

void set_name(ABV* abv, char name[])
{
  strncpy(abv->beverage_name, name, MAX_NAME_CHARS);
  abv->beverage_name[MAX_NAME_CHARS] = '\0';
}

void get_name(ABV const* abv, char* out_name)
{
  strncpy(out_name, abv->beverage_name, MAX_NAME_CHARS);
  out_name[MAX_NAME_CHARS] = '\0';
}

void set_abv(ABV* abv, float new_abv)
{
  abv->alcohol_by_volume = new_abv;
}

float get_abv(ABV const* abv)
{
  return abv->alcohol_by_volume;
}
