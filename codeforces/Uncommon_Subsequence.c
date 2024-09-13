#include <stdio.h>
#include <string.h>

#define n 100000

int main() {
    
    char str1[n];
    char str2[n];
    scanf("%[^\n]", str1); getchar();
    scanf("%[^\n]", str2);
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    
    for (int i = 0; i < (size1 < size2 ? size1 : size2); i++) {
        if (str1[i] > str2[i]) {
            printf("%d", size1); return 0;
        }
        if (str1[i] < str2[i]) {
             printf("%d", size2); return 0;
        }
    }
    
    printf("-1");
    
    
    return 0;
    
}











