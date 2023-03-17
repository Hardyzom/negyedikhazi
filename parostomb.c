#include <stdio.h>

int is_even(int n) {
  if (n % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int szam = 8;
  if (is_even(szam)) {
    printf("%d páros.\n", szam);
  } else {
    printf("%d páratlan.\n", szam);
  }
  return 0;
}
