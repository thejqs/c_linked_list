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
  set_name(&my_other_abv, "straight hooch");
  set_alcohol_by_volume(&my_other_abv, 80.0f);

  ABV yet_another_abv;
  set_name(&yet_another_abv, "CHARTREUSE Y'AAAAAALLLLL");
  set_alcohol_by_volume(&yet_another_abv, 55.0f);

  extend_list(my_list, &my_other_abv);
  extend_list(my_list, &yet_another_abv);
  enumerate(my_list, print_abv);
  destroy_list(my_list);
  return 0;
}
