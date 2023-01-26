#include <stdio.h>

int main() {

    int n, x, y, menor, maior, soma;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        soma = 0;
        
        scanf("%d %d", &x, &y);
        
        if (x < y) {
            menor = x;
            maior = y;
        } else {
            menor = y;
            maior = x;
        }
        
        for (int k = menor+1; k < maior; k++) {

            if (k % 2 != 0) {
                soma += k;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}