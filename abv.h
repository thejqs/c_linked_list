#ifndef __ABV_H__
#define __ABV_H__

#define MAX_NAME_CHARS 99

typedef struct
{
  char beverage_name[MAX_NAME_CHARS + 1];
  float alcohol_by_volume;
}  ABV;

void set_name(ABV* abv, char name[]);
void get_name(ABV const* abv, char* out_name);

void set_alcohol_by_volume(ABV* abv, float new_abv);
float get_alcohol_by_volume(ABV const* abv);

#endif
