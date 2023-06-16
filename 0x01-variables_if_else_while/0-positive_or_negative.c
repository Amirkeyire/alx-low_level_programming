#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Determine the sign of a number.
 *
 * @param n The number to determine the sign of.
 * @return A string indicating the sign of the number.
 */
char *determine_sign(int n) {
  if (n > 0) {
    return "positive";
  } else if (n == 0) {
    return "zero";
  } else {
    return "negative";
  }
}

int main() {
  int n = rand() - RAND_MAX / 2;

  printf("The number %d is %s.\n", n, determine_sign(n));

  return 0;
}}
