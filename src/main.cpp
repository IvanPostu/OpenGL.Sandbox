#include <cstdlib>
#include <cstdio>

#include "Adder/adder.hpp"

using namespace std;

int main(int argc, char **argv)
{

  float f = add(2.2f, 3.3f);

  printf("%s - %f\n", "S1impleProject", f);

  return EXIT_SUCCESS;
}
