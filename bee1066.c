#include <stdio.h>

int main() {

    int numeros[5], par=0, impar=0, positivo=0, negativo=0;

    for(int i = 0; i < 5; i++) {

        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }

        if (numeros[i] > 0) {
            positivo++;
        } else if (numeros[i] < 0) {
            negativo++;
        }

    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}