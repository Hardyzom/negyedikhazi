#include <stdio.h>

int legnagyobb(int tomb[], int n) {
    int max = tomb[0];
    for (int i = 1; i < n; i++) {
        if (tomb[i] > max) {
            max = tomb[i];
        }
    }
    return max;
}

int main() {
    int tomb[] = {1, 50, 43, 623, 3};
    int n = sizeof(tomb)/sizeof(tomb[0]);
    int max = legnagyobb(tomb, n);
    printf("A legnagyobb elem: %d\n", max);
    return 0;
}
