#include <stdio.h>
#include <stdbool.h>

bool rendezes(int tomb[], int n) {
    for (int i = 1; i < n; i++) {
        if (tomb[i] < tomb[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int tomb[] = {1, 2, 3, 4, 5};
    int n = sizeof(tomb) / sizeof(tomb[0]);
    
    if (rendezes(tomb, n)) {
        printf("A tomb rendezett.\n");
    } else {
        printf("A tomb nem rendezett.\n");
    }
    
    return 0;
}
