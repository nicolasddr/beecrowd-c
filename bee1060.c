#include <stdio.h>

int main() {

    float valor;
    int i=0, qtd=0;

    while (i < 6){

        scanf("%f", &valor);
        if (valor > 0){
            qtd++;
        }

        i++;
    }

    printf("%d valores positivos\n", qtd);
    
    return 0;
}