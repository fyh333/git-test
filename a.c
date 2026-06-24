#include <stdio.h>

int test(int a, int b) {
  return a + b;
}

int main(int argc, char *argv[]) {
  int a = test(1, 2);

  printf("a: %d\n", a);

  return 0;
}
