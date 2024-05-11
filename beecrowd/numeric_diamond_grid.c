/* THis My Solution Can Be Not The Best Solution, So You Can Find Another Solution Better Then This */

#include <stdio.h>

int main() {
    int n = 9, count = 0, b, c = 0, a, d = 0;
    for (int i = 0; i < 2 * n - 1; i++) {
        b = 1;
        a = 1;
        for (int j = 0; j < (2 * n) - 1; j++) {
            if (i < n) {
                if (j < n) {
                    if (i <= j) printf("%d ",n - i);
                    else printf("%d ",n - j); // @
                } else {
                    if (j < (2 * n) - i - 1) printf("%d ",n - i);
                    else {
                        printf("%d ", n + b - i); // /
                        b++;
                    }
                }
            } else {
                if (j < n) {
                    if (j < n - 1 - c) printf("%d ", n - j); // *
                    else printf("%d ", i - n + 2);
                } else {
                    if (j < n + d)printf("%d ", i - n + 2);
                    else { printf("%d ", i - n + 2 + a); a++;}
                }

            }
        }

        printf("\n");
        if (i < n - 1) count++;
        else {
            count--; c++; d++;
        }
    }
    return 0;
}
