#include <stdio.h>
#include "blake/blake.h"

int main() {
  if (is_lilendian())
    printf("Executing Blake2 tests on a little-endian machine...\n");
  else
    printf("Executing Blake2 tests on a machine which is not little-endian...\n");
  if (blake2s_selftest() == true)
    printf("  blake2s_selftest() is true.\n");
  else
    printf("  blake2s_selftest() is false.\n");
  if (blake2b_selftest() == true)
    printf("  blake2b_selftest() is true.\n");
  else
    printf("  blake2b_selftest() is false.\n");
  return 0;
}