#include <stdio.h>

/**
 * main - A program that prints the size of various computer types
 *
 * Return: 0 on success.
 */
int main(void) {
  char a;
  int b;
  long int c;
  long long int d;
  float f;

  printf("size of a char: %lu byte(s)\n", sizeof(a));
  printf("size of an int: %lu byte(s)\n", sizeof(b));
  printf("size of a long int: %lu bytes(s)\n", sizeof(c));
  printf("size of a long long int: %lu bytes(s)\n", sizeof(d));
  printf("size of a float: %lu bytes(s)\n", sizeof(f));
  return 0;
}
