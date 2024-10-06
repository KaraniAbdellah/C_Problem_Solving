#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define n 100


int main() {
	
	char *s = (char *) malloc(sizeof(char));
	char *t = (char *) malloc(sizeof(char));

	scanf("%[^\n]", s); getchar();
	scanf("%[^\n]", t);
	t[n - 1] = '\0'; s[n - 1] = '\0';
	
	bool check = true;
	
	// must be deffrent lenght
	
	for (int i = 0; s[i] != '\0'; i++) {
		char c = s[i]; int sub_check = 0;
		for (int j = 0; t[j] != '\0'; j++) {
			if (t[j] != '1' && c == t[j]) {
				sub_check = 1; t[j] = '1'; break;
			}
		}
		if (sub_check == 0) {
			check = false; break;
		}
	}
	
	printf("%d\n", check);
	
	
	return 0;
}










