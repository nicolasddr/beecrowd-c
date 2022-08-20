#include <stdio.h>

int main() {

    int num;
    int horas;
    double valor;
    double salario;

    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &valor);

    salario = horas*valor;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}