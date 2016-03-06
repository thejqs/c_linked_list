#ifndef __ABV_H__
#define __ABV_H__

typedef struct
{
  char* beverage_name;
  float abv;
}  ABV;

void set_name(ABV* abv, char name[]);
char* get_name(ABV const* abv);

void set_abv(ABV* abv, float new_abv);
float get_abv(ABV const* abv);

#endif
