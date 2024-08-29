#include <stdio.h>

#define MAX 1001

// Prototype Of Function
int is_exit(char *set, char c);


int is_exit(char *set, char c) {
    
    for (int i = 0; set[i] != '\0'; i++) {
        
        if (set[i] == c) return 0;
        
    }
    
    return 1;
    
}


int main() {
    char set[MAX];
    char c;
    int count = 0;
    while ((c = getchar()) && c != '\n') {
        if (c != '}' && c != '}' && c != ',' && c != ' ' && c != '{') {
            if(is_exit(set, c)) {
                set[count] = c; count++;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}








