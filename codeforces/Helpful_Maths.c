#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100


char *bubble_sort(char *str, int n);

char *bubble_sort(char *str, int n) {
    for (int i = 0; i < n; i++) {
        if (str[i] != '+') {
            for (int j = 0; j < n - i - 1; j++) {
                char c = str[j];
                if (str[j + 2] != '\0' && str[j] != '+' && str[j + 2] != '+') {
                    if (str[j] >= str[j + 2]) {
                        char temp = str[j];
                        str[j] = str[j + 2];
                        str[j + 2] = temp;
                    }
                }
            }
        }
    }
    
    return str;
}


int main() {
    
    
    char *str = (char *) calloc(MAX, sizeof(char));
    scanf("%s", str); str[MAX] = '\0';
    int n = strlen(str);
    bubble_sort(str, n);
    
    printf("%s", str);
    
    return 0;
}





