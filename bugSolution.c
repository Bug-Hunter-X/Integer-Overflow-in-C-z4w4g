#include <stdio.h>
#include <limits.h>
int main() {
  int x = 10;
  int *ptr = &x;
  if (20 <= INT_MAX) { 
    *ptr = 20; 
  } else {
    fprintf(stderr, "Error: Integer overflow detected.");
    return 1;
  }
  printf("%d", x);
  return 0;
}