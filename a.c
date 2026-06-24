#include <stdio.h>

int test(int a) {
  return a;
}

int main(int argc, char *argv[]) {
  int a = test(1);

  printf("a: %d\n", a);

  return 0;
}
