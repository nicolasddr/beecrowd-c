#include <stdio.h>

int main() {

    int n=1, m=1, soma, maior, menor;

    while (1) {
        soma = 0;

        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0) {
            break;
        }
        
        if (m > n) {
            maior = m;
            menor = n;
        } else {
            maior = n;
            menor = m;
        }

        for (int i = menor; i <= maior; i++) {
            soma += i; 
            printf("%d ", i);
        }

        printf("Sum=%d\n", soma);


    }


    return 0;
}