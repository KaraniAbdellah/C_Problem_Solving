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

	int n, t, number;
	scanf("%d %d", &n, &t);
	
	for (int i = 0; i < n; i++) {
		if (number % 10 != 0 && getNumberOfDigit(number) == n && number % t == 0) {
			printf("%d\n", number);
			return;
		}
	}
	printf("%d\n", -1);
	
	return 0;

}



