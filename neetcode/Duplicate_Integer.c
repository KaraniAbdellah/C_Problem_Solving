#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int T[n];
    for (int i = 0; i < n; i++) scanf("%d", &T[i]);
    int check = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (T[i] == T[j]) {
                check = 1; return 1;
            }
        }
    }
    if (check == 0) printf("false\n");
    else printf("true\n");
    /*
        Time --> O(n ^ 2)
        Space --> O(n)
    */
    
    
    // Another Solution
    int n;
    scanf("%d", &n);
    int T[n];
    for (int i = 0; i < n; i++) scanf("%d", &T[i]);
    // sort use O(log(n) * n)
    
    
    
    
    
    
    
    return 0;
}
















