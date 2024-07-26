#include <stdio.h>
#include <stdbool.h>

int main() {
    int n_test, n_legs;
    scanf("%d", &n_test);
    int re[n_test];
    // getting the number of animals
    for (int i = 0; i < n_test; i++) {
        scanf("%d", &n_legs);
        re[i] = (n / 4) + ((n % 4) / 2);
    }
    // print the result
    for (int i = 0; i < n_test; i++) {
        printf("%d ", re[i]);
    }
    return 0;
}


/*
    FIND THE SUM WITH 4 AND 2
    10 ---> 4 + 4 + 2 ---> 3
    6 --> 4 + 2 ---> 2
    2 --> 2 --> 1
*/


/* ANOTHER SOLUTION
    int count = 0; int nbr = 0; bool check;
    while (nbr < n_legs) {
        nbr += 4;
        check = true;
        if (nbr > n_legs) {
            nbr -= 4;
            check = false;
        }
        if (!check) {
            nbr += 2;
        }
        count++;
    }
*/




























