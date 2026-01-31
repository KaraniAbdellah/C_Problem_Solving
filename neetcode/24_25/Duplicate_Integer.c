#include <stdio.h>
#include <stdlib.h>

void heapSort(int *T, int n);
void heap(int *T, int n, int i);

void heapSort(int *T, int n) {
    int i = (n / 2) - 1;
    for (int j = i; j >= 0; j--) {
        heap(T, n, j);
    }
    for (int j = n - 1; j >= 0; j--) {
        int temp = T[j];
        T[j] = T[0];
        T[0] = temp;
        heap(T, j, 0);
    }
}

void heap(int *T, int n, int i) {
    int max = i;
    int g = 2 * i + 1;
    int d = 2 * i + 2;
    
    if (g < n && T[g] > T[max]) max = g;
    if (d < n && T[d] > T[max]) max = d;
    if (max != i) {
        int temp = T[i];
        T[i] = T[max];
        T[max] = g;
        heap(T, n, max);
    }
    
}





int main() {
    int n;
    scanf("%d", &n);
    int *T = (int *) malloc(sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &T[i]);
    int check = 0;
    for (int i = 0; i < n; i++) {
        if (check == 1) break;
        for (int j = i + 1; j < n; j++) {
            if (T[i] == T[j]) {
                check = 1; break;
            }
        }
    }
    if (check == 0) printf("false\n");
    else printf("true\n");
    
    
    // Another Solution ---> sort use O(log(n) * n)
    heapSort(T, n);
    for (int i = 0; i < n - 1; i++) {
        if (T[i] == T[i + 1]) {
            printf("true"); return 1;
        }
    }
    printf("false");
    return 0;
}





// First Idea --> O(n * 2)
// Second Idea --> O(nlog(n))




















