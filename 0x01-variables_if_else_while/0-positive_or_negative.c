#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
  int n = 0;

  srand(time(NULL));
  n = rand() - RAND_MAX / 2;

  if (n > 0) {
    printf("%d is positive\n", n);
  } else if (n == 0) {
    printf("%d is zero\n", n);
  } else {
    printf("%d is negative\n", n);
  }

  return 0;
}
