#include <stdio.h>

int main() {

    double nota, media, i=0;

    while(i < 2) {
        scanf("%lf", &nota);
        if (nota < 0.0 || nota > 10.0) {
            printf("nota invalida\n");
        } else {
            media += nota/2;
            i++;
        }
    }

    printf("media = %.2lf\n", media);

    return 0;
}