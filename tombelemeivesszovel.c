#include <stdio.h>

void kiirat(int tomb[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", tomb[i]);
        if (i < n - 1) {
            printf(", ");
        } else {
            printf("\n");
        }
    }
}

int main(){

    int tomb[] = {1, 2, 3, 4, 5};
    int n = sizeof(tomb) / sizeof(tomb[0]);
    kiirat(tomb, n);

}