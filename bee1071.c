#include <stdio.h>

int main() {

    int x, y, maior, menor, somaImpar=0;
    scanf("%d\n", &x);
    scanf("%d", &y);

    if (x > y) {
        maior = x;
        menor = y;
    } else {
        maior = y;
        menor = x;
    }

    if (menor % 2 == 0) {
        menor++;
    } else {
        menor+=2;
    }

    while (menor < maior) {

        somaImpar += menor;

        menor+=2;
    }

    printf("%d\n", somaImpar);

    return 0;
}