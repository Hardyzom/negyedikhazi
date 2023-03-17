#include <stdio.h>
#include <stdbool.h>


bool valid_triangle(float a, float b, float c) {

    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    if (a + b <= c || b + c <= a || c + a <= b) {
        return false;
    }
    return true;
}

int main() {
    float a = 1;
    float b = 2;
    float c = 10;
    if (valid_triangle(a, b, c)) {
        printf("A háromszög megszerkeszthető!\n", a, b, c);
    } else {
        printf("A háromszög nem szerkeszthető meg\n", a, b, c);
    }
    return 0;
}