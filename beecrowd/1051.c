#include <stdio.h>

int main() {
    float salary, tax = 0.0;
    scanf("%f", &salary);
    if (salary <= 2000.00) {
        printf("Isento\n");
    } else {
        if (salary > 4500.00) {
            tax += (salary - 4500.00) * 0.28;
            salary = 4500.00;
        }
        if (salary > 3000.00) {
            tax += (salary - 3000.00) * 0.18;
            salary = 3000.00;
        }
        if (salary > 2000.00) {
            tax += (salary - 2000.00) * 0.08;
        }
        printf("R$ %.2f\n", tax);
    }
    
    return 0;
}

