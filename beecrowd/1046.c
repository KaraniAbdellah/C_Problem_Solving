#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a >= b + c) printf("NAO FORMA TRIANGULO\n");
    if (pow(a , 2) == pow(b, 2) + pow(c, 2)) printf("TRIANGULO RETANGULO\n");
    if (pow(a , 2) > pow(b, 2) + pow(c, 2)) printf("TRIANGULO OBTUSANGULO\n");
    if (pow(a , 2) < pow(b, 2) + pow(c, 2)) printf("TRIANGULO ACUTANGULO\n");
    if (a == b && b == c && c == a) printf("TRIANGULO EQUILATERO\n");
    if (a + b > c && a + c > b && b + c > a) printf("TRIANGULO ISOSCELES\n");
    return 0;
}




