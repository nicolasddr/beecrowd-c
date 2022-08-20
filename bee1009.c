#include <stdio.h>

int main() {

    char nome[20];
    double salario;
    double vendas;
    double comissao;
    double total;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    comissao = 0.15*vendas;
    total = salario + comissao;

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}