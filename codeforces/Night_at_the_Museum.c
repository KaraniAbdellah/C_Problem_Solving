#include <stdio.h>
#include <string.h>


int main() {
    char str[101];
    str[100] = '\0';
    scanf("%[^\n]", str);
    int length = strlen(str);
    // start finding the minumum number of rotations
    /* int sum = 0, count, start = 97, end = 122;
    for (int k = 0; k < length; k++) {
        count = 0;
        if (start == 97) end = 122;
        if (end == 122) start = 97;
        printf("start = %d and end = %d\n", start, end);
        for (int i = start, j = end; ; i++, j--) {
            count++;
            printf("i = %d, j = %d and str = %d, count = %d\n", i, j, str[k], count);
            if (i == (int) str[k] || j == (int) str[k]) {
                sum += count;
                start = end = (int) str[k];
                break;
            }
            if (j == 97) j = 122;
            if (i == 122) i = 97;
        }
        printf("\n============\n");
    } */
    int start = 97;
    int sum = 0;
    for (int k = 0; k < length; k++) {
        
        
    }
    
    
    printf("%d", sum);
    return 0;
}

















