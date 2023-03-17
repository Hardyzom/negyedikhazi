#include <stdio.h>

int is_odd(int n) {
  if (n % 2 != 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int szam = 5;
  if (is_odd(szam)) {
    printf("%d páratlan.\n", szam);
  } else {
    printf("%d páros.\n", szam);
  }
  return 0;
}
