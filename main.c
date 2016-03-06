#include <stdio.h>
#include "abv.h"

int main(int argc, char* argv[])
{

  ABV my_abv;
  set_name(&my_abv, "Jack");
  set_abv(&my_abv, 40.0f);;
  
  char name[100];
  float abv;

  get_name(&my_abv, name);
  abv = get_abv(&my_abv);

  printf("%s has abv %f\n", name, abv);
  return 0;

}
