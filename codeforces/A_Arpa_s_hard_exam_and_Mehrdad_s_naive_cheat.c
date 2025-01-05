#include <stdio.h>

// this last
int find_last_digit(int n) {
   if (n % 3 == 0) return 2; 
   else if (n % 2 == 0) return 4;
   else if (n % 1 == 0) return 8;
   else 0;
} 

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", find_last_digit(n));
    return 0;
}
