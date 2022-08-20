#include <stdio.h>

int main() {

    int codigo, codigo2;
    int qtd, qtd2;
    double valor, valor2;
    double total;

    scanf("%d %d %lf", &codigo, &qtd, &valor);
    scanf("%d %d %lf", &codigo2, &qtd2, &valor2);
    
    total = (valor*qtd) + (valor2*qtd2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}