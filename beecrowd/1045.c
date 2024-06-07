#include <stdio.h>


// [a, b, c]

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    // Sort In Descreasing Order
    double temp;
    if (a < b) { temp = a; a = b; b = temp; };
    if (a < c) { temp = a; a = c; c = temp; };
    if (b < c) { temp = c; c = b; b = temp; };
    // printf("a = %lf, b = %lf, c = %lf\n", a, b, c);
    // Print The Type of The Traingle
    if (a >= b + c)  {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if (a * a == b * b + c * c) printf("TRIANGULO RETANGULO\n");
    if (a * a > b * b + c * c) printf("TRIANGULO OBTUSANGULO\n");
    if (a * a < b * b + c * c) printf("TRIANGULO ACUTANGULO\n");
    if (a == b && b == c && c == a) printf("TRIANGULO EQUILATERO\n");
    if ((a == b && c != b) || (b == c && b != a) || (a == c && c != b)) printf("TRIANGULO ISOSCELES\n");
    return 0;
}




