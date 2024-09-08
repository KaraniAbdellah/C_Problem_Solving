#include <stdio.h>
#include <stdlib.h>



int main() {
    
    int n;
    scanf("%d", &n);
    int S[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }
    
    int *Result = (int *) malloc(1 * sizeof(int));
    int t = 0, count = 0;
    
    while (1) {
        int R[3]; for (int i = 0; i < 3; i++) R[i] = -1;
        for (int j = 0; j < n; j++) {
            if (R[S[j] - 1] == -1 && S[j] != -1) {
                R[S[j] - 1] = j + 1;
                S[j] = -1;
            }
        }
        if (R[0] == -1 || R[1] == -1 || R[2] == -1) break;
        else {
            Result = realloc(Result, (t + 3) * sizeof(int));
            Result[t] = R[0]; Result[t + 1] = R[1]; Result[t + 2] = R[2];
            t += 3;
        }
        count++;
    }
    
    printf("%d\n", count);
    
    if (count != 0) {
        for (int i = 0; i < count * 3; i++) {
            if (i != 0 && i % 3 == 0) printf("\n");
            printf("%d ", Result[i]);
        }
    }
    printf("\n");
    return 0;
    
}












