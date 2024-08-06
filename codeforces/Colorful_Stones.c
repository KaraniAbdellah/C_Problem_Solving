#include <stdio.h>



int main() {
    char str1[51];
    char str2[51];
    scanf("%s", str1); str1[50] = '\0'; getchar();
    scanf("%s", str2); str2[50] = '\0';
    // start getting the position
    int count = 1;
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str1[count - 1] == str2[i]) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}





