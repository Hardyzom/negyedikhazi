#include <stdio.h>

int legkisebb(int tomb[], int n) {
    int min = tomb[0];
    for (int i = 1; i < n; i++) {
        if (tomb[i] < min) {
            min = tomb[i];
        }
    }
    return min;
}

int main() {
    int tomb[] = {43, 12, 86, 4, 35};
    int n = sizeof(tomb) / sizeof(tomb[0]);
    
    int min = legkisebb(tomb, n);
    printf("A legkisebb elem: %d\n", min);
    
    return 0;
}
