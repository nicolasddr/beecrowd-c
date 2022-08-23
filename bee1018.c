#include <stdio.h>

int main() {

    int valor;
    int nota_100;
    int nota_50;
    int nota_20;
    int nota_10;
    int nota_5;
    int nota_2;
    int nota_1;
    int resto;

    scanf("%d", &valor);

    
    resto = valor%100;
    nota_100 = (valor - resto)/100;

    nota_50 = (resto - (resto%50))/50;
    resto = resto%50;

    nota_20 = (resto - (resto%20))/20;
    resto = resto%20;

    nota_10 = (resto - (resto%10))/10;
    resto = resto%10;

    nota_5 = (resto - (resto%5))/5;
    resto = resto%5;

    nota_2 = (resto - (resto%2))/2;
    resto = resto%2;

    nota_1 = resto;


    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", nota_100);
    printf("%d nota(s) de R$ 50,00\n", nota_50);
    printf("%d nota(s) de R$ 20,00\n", nota_20);
    printf("%d nota(s) de R$ 10,00\n", nota_10);
    printf("%d nota(s) de R$ 5,00\n", nota_5);
    printf("%d nota(s) de R$ 2,00\n", nota_2);
    printf("%d nota(s) de R$ 1,00\n", nota_1);

    return 0;
}