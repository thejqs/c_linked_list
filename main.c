#include <stdio.h>

#include "abv.h"
// #include "abv_node.h"
#include "abv_list.h"

int main(int argc, char* argv[])
{
  ABV my_abv;

  set_name(&my_abv, "Most bourbons, honestly,");
  set_alcohol_by_volume(&my_abv, 40.0f);

  ABV_LIST* my_list = create_list(&my_abv);

  ABV my_other_abv;
  set_name(&my_other_abv, "John");
  set_alcohol_by_volume(&my_other_abv, 80.0f);

  ABV_LIST* my_other_list = create_list(&my_other_abv);

  // ABV_NODE my_node;
  // set_abv(&my_node, &my_abv);
  // set_next(&my_node, NULL);
  //
  // ABV my_new_abv;
  // char name[100];
  // float abv;
  //
  // my_new_abv = get_abv(&my_node);
  // get_name(&my_new_abv, name);
  // abv = get_alcohol_by_volume(&my_new_abv);
  //
  // printf("%s has abv %f\n", name, abv);

  destroy_list(my_list);
  destroy_list(my_other_list);
  return 0;
}
