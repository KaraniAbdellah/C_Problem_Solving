#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, r1, r2, delta;
	scanf("%lf %lf %lf", &a, &b, &c);
	delta = pow(b, 2) - (4 * a * c);
	if (a == 0 || delta < 0) {
		printf("Impossivel calcular");
		return 0;
	}
	r1 = (-b - sqrt(delta)) / (2 * a);
	r2 = (-b + sqrt(delta)) / (2 * a);
	printf("R2 = %.5lf\n", r2);
	printf("R1 = %.5lf", r1);
	return 0;
}



