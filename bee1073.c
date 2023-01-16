#include <stdio.h>

int main() {

    int n, valor;
    double res;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        valor = 1+i;
        
        if (valor % 2 == 0) {
            res = valor*valor;
            printf("%d^2 = %.lf\n", valor, res);
        }
 
    }

    return 0;
}