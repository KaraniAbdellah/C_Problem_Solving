#include <stdio.h>



int get_max(int *Coins, int n) {
	
	int index  = 0;
	int max = Coins[index];
	for (int i = 0; i < n; i++) {
		if (Coins[i] != -1 && max < Coins[i]) {
			max = Coins[i];
			index = i;
		}
	}
	Coins[index] = -1;
	return max;
	
}


int main() {
	
	int n, sum = 0;
	scanf("%d", &n);
	int Coins[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &Coins[i]); sum += Coins[i];
	}
				
	int goal = (sum) / 2;
	int count = 1;
	int sum_coins = 0;
	while (1) {
		sum_coins += get_max(Coins, n);
		if (sum_coins > goal) break;
		else count++;
	} // O(n ^ 2) 
	
	printf("%d\n", count);
	return 0;
	
}











