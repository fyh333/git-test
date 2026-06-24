#include <stdio.h>

int test(int x, int b) {
  return x + b + 1;
}

int main(int argc, char *argv[]) {
  int a = test(1, 2);

  printf("a: %d\n", a);

  return 0;
}
