#include <stdio.h>
#include <stdlib.h>


int main() {
    // my code
    /* int n, groups = 1;
    char str[3], previous;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        getchar(); scanf("%2[^\n]", str);
        if (i == 0) previous = str[0];
        else {
            if (previous != str[0]) {  groups++; previous = str[0]; }
        }
    }
    printf("%d", groups); */
    
    // another code
    /* int n, groups = 1, previous, number;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        if (i == 0) previous = number;
        else {
            if (previous != number) { groups++; previous = number; }
        }
    }
    printf("%d", groups); */
    // Another code
    int n, groups = 1, previous, number;
    scanf("%d %d", &n, &number); previous = number;
    for (int i = 1; i < n; i++) {
        scanf("%d", &number);
        if (number != previous) groups++;
        previous = number; 
    }
    printf("%d", groups);
    
    return 0;
}













