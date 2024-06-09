#include <stdio.h>
 
 0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Above 2000.00

15%
12%
10%
7%
4%
 
int main() {    
    float salary, temp;
    scanf("%f", &salary);
    if (salary <= 0 && salary >= 400) {
        temp = salary;
        printf("Novo salario: %.2f \n Reajuste ganho: %.2f\nEm percentual: %d %", (salary * 15) / 100, salary - temp, 15);
    }
    if (salary > 400 && salary <= 800) {
        temp = salary;
        printf("Novo salario: %.2f \n Reajuste ganho: %.2f\nEm percentual: %d %", (salary * 15) / 100, salary - temp, 15);
    }
    if (salary <= 0 && salary >= 400) {
        temp = salary;
        printf("Novo salario: %.2f \n Reajuste ganho: %.2f\nEm percentual: %d %", (salary * 15) / 100, salary - temp, 15);
    }
    if (salary <= 0 && salary >= 400) {
        temp = salary;
        printf("Novo salario: %.2f \n Reajuste ganho: %.2f\nEm percentual: %d %", (salary * 15) / 100, salary - temp, 15);
    }
    return 0;
}
