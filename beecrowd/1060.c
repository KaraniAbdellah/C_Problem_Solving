#include <stdio.h>

int main() {
    float numbers[6];
    int count = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%f", &numbers[i]);
        if (numbers[i] > 0) count++;
    }
    printf("%d valores positivos\n", count);
    return 0;
}

