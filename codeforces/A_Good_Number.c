#include <stdio.h>
#include <string.h>

int find(char *S, char c) {
    for (int i = 0; S[i] != '\0'; i++) {
        if (c == S[i]) return 1;
    }
    return -1;
}

int main() {
    int n, count = 0, k;
    scanf("%d %d", &n, &k);
    
    // Array S contains all digits from 0 to 9
    char S[] = "0123456789";  

    for (int i = 0; i < n; i++) {
        char N[11];
        scanf("%[^\n]", N);  // Read each number as a string
        getchar();  // To consume the newline character

        int check = 0;
        int length = strlen(N);  // Calculate string length once
        for (int j = 0; j < length; j++) {
            if (find(S, N[j])) {
                check++;
            }
        }
        
        if (check >= k + 1) count++;
    }

    printf("%d\n", count);
    return 0;
}
