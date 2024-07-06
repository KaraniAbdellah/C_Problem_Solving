#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int T[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }
    // Sort The Cubes
    int indexMin, temp;
    for (int i = 0; i < n; i++) {
        indexMin = i;
        for (int j = i + 1; j < n; j++) {
            if (T[indexMin] > T[j]) indexMin = j;
        }
        temp = T[i];
        T[i] = T[indexMin];
        T[indexMin] = temp;
    }
    // Print The Result
    for (int i = 0; i < n; i++) printf("%d ", T[i]);
    return 0;
}



