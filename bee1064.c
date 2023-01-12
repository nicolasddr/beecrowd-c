#include <stdio.h>

int main() {

    float num, media, soma=0;
    int i=0, qtd=0;

    while (i < 6) {

        scanf("%f", &num);

        if (num > 0) {
            soma += num;
            qtd++;
        }

        i++;
    }

    media = soma/qtd;

    printf("%d valores positivos\n", qtd);
    printf("%.1f\n", media);

    return 0;
}