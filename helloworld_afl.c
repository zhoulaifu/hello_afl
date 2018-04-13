#include <stdio.h>
#include <stdlib.h>

//AFL expects the entry program takes input data from standard input
int main() {
  if (getchar()=='a')
    abort();
  return 0;
}
