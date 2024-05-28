#include <stdio.h>
#include <math.h>

int main() {
	float N1, N2, N3, N4, averge, score;
	if (scanf("%f %f %f %f", &N1, &N2, &N3, &N4) != -1) {
		averge = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
		printf("Media: %.1f\n", averge);
		if (averge >= 7.0) printf("Aluno aprovado.\n");
		else if (averge < 5.0) printf("Aluno reprovado.\n");
		// else if (averge <= 5.0 && averge >= 6.9) printf("Aluno em exame.\n");
		else printf("Aluno em exame.\n");
		if (scanf("%f", &score) != EOF) {
			printf("Nota do exame: %.1f\n", score);
			float result = (N1 + N2 + N3 + N4 + averge) / 2;
			if (result >= 5.0) printf("Aluno aprovado.\n");
			// else if (result <= 4.9) printf("Aluno reprovado.\n");
			else printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", (averge + score) / 2); 
		}		
	}	
}



