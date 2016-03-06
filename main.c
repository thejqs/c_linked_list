#include <stdio.h>
#include "abv.h"

int main(int argc, char* argv[])
{

  ABV my_abv;
  set_name(&my_abv, "Jack");
  set_abv(&my_abv, 40.0f);;


  return 0;

}
