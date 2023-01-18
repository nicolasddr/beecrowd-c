#include <stdio.h> 

int main() {

    int n, quantia;
    char tipo;
    int total=0, coelhos=0, ratos=0, sapos=0;
    float perCoelhos, perRatos, perSapos;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d %c", &quantia, &tipo);

        if (tipo == 'C') {
            coelhos += quantia;
        } else if (tipo == 'R') {
            ratos += quantia;
        } else if (tipo == 'S') {
            sapos += quantia;
        }

        total += quantia;

    }

    perCoelhos = ((float)coelhos/total)*100;
    perRatos = ((float)ratos/total)*100;
    perSapos = ((float)sapos/total)*100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", perCoelhos);
    printf("Percentual de ratos: %.2f %%\n", perRatos);
    printf("Percentual de sapos: %.2f %%\n", perSapos);

    return 0;
}