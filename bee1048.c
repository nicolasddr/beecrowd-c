#include <stdio.h>

int main() {

    float salario, reajuste, novoSalario;
    int percentual;
    scanf("%f", &salario);

    if (0 <= salario && salario <= 400.00) {
        percentual = 15;   
    } else if (400.01 <= salario && salario <= 800.00) {
        percentual = 12;
    } else if (800.01 <= salario && salario <= 1200.00) {
        percentual = 10;
    } else if (1200.01 <= salario && salario <= 2000.00) {
        percentual = 7;
    } else if (salario > 2000.00) {
        percentual = 4;
    }

    reajuste = (percentual/100.00)*salario;
    novoSalario = salario + reajuste;

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novoSalario, reajuste, percentual);

    return 0;
}