    #include <stdio.h>

 
int main() {    
    float salary, temp;
    scanf("%f", &salary);
    if (salary >= 0 && salary <= 400) {
        temp = ((salary * 15) / 100) + salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", temp, (float) 
        temp - salary, 15);
    }
    else if (salary > 400 && salary <= 800) {
        temp = ((salary * 12) / 100) + salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", temp, (float) 
        temp - salary, 12);
    }
    else if (salary > 800 && salary <= 1200) {
        temp = ((salary * 10) / 100) + salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", temp, (float) 
        temp - salary, 10);
    }
    else if (salary > 1200 && salary <= 2000) {
        temp = ((salary * 7) / 100) + salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", temp, (float) 
        temp - salary, 7);
    } else {
        temp = ((salary * 4) / 100) + salary;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", temp, (float) 
        temp - salary, 4);
    }
    return 0;
}















