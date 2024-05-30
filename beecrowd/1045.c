#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a * a == b * b + c * c) {
        printf("Perimetro = %.1f", a + b + c);
    } else {
        printf("Area = %.1f", b * a * b);
    }
    return 0;
    
}

