#include <stdio.h>


// find a number that consist n digit and devides by t


int getNumberOfDigit(int n) {
	int count = 0;
	while(n != 0) {
		n = n / 10;
		count++;
	}
	return count; 
}


int main() {

	int n, t;
	scanf("%d %d", &n, &t);
	
	int number = 1;
	for (int i = 0; i < n - 1; i++) {
		number = number * 10;
	}
	
	while (1) {
		int NumberDigit = getNumberOfDigit(number);
		if (number % t == 0 && NumberDigit == n) {
			printf("%d\n", number);
			return 0;
		}
		if (NumberDigit == n + 1) break;
		number += 1;
	}
	printf("%d\n", -1);
	
	return 0;

}



