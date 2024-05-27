#include <stdio.h>

int main() {
	int item;
	float amount;
	scanf("%d %f", &item, &amount);
	switch (item) {
		case 1: {printf("Total: R$ %.2f\n", 4 * amount); break;}
		case 2: {printf("Total: R$ %.2f\n", 4.50 * amount); break;}
		case 3: {printf("Total: R$ %.2f\n", 5 * amount); break;}
		case 4: {printf("Total: R$ %.2f\n", 2 * amount); break;}
		case 5: {printf("Total: R$ %.2f\n", 1.50 * amount); break;}
		default: return 0;
	}
	return 0;
}


