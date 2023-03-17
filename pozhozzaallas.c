#include <stdio.h>
#include <stdlib.h>

void abszolutertek(int szamok[], int n) {
    for (int i = 0; i < n; i++) {
        if (szamok[i] < 0) {
            szamok[i] = abs(szamok[i]);
        }
    }
}

int main() {
    int szamok[] = {1, -2, 3, -4, 5};
    int n = sizeof(szamok) / sizeof(szamok[0]);

    printf("Eredeti: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    abszolutertek(szamok, n);

    printf("Az abszolutertekes valtozat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}
