#include <stdio.h>
#include "abv.h"
#include "abv_node.h"

int main(int argc, char* argv[])
{
  ABV my_abv;
  set_name(&my_abv, "Jack");
  set_alcohol_by_volume(&my_abv, 40.0f);

  ABV_NODE my_node;
  set_abv(&my_node, &my_abv);
  set_next(&my_node, NULL);

  ABV my_new_abv;
  char name[100];
  float abv;

  my_new_abv = get_abv(&my_node);
  get_name(&my_new_abv, name);
  abv = get_alcohol_by_volume(&my_new_abv);

  printf("%s has abv %f\n", name, abv);
  return 0;
}
