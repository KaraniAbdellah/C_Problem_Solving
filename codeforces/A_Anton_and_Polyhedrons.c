#include <stdio.h>


int main() {

    int n;
    scanf("%d", &n); getchar();
    
    int count = 0;
    char SI[20]; SI[19] = '\0';
    for (int i = 0; i < n; i++) {
        scanf("%[^\n]", SI); getchar();
        if (strcmp(SI, "Tetrahedron") == 0) {
            count += 4;
        } else if (strcmp(SI, "Cube") == 0) {
            count += 6;
        } else if (strcmp(SI, "Octahedron") == 0) {
            count += 8;
        } else if (strcmp(SI, "Dodecahedron") == 0) {
            count += 12;
        } else {
            count += 20;
        }
    }
    printf("%d\n", count);



    return 0;
}



