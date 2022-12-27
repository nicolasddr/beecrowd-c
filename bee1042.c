#include <stdio.h>

int main() {

    int a, b, c, aux;
    int a1, b1, c1;
    scanf("%d %d %d", &a, &b, &c);


    //Caso 1: A é menor que b e c
    if (a <= b && a <= c) {
        a1 = a;
        if (c <= b) {
            b1 = c;
            c1 = b;
            
        } else {
            b1 = b;
            c1 = c;
        }
    }

    //Caso 2: B é menor que A e C
    if (b <= a && b <= c) {
        a1 = b;
        if (a <= c) {
            b1 = a;
            c1 = c;
        } else {
            b1 = c;
            c1 = a;
        }
    }

    //Caso 3: C é menor que A e B
    if (c <= a && c <= b) {
        a1 = c;
        if (a <= b) {
            b1 = a;
            c1 = b;
        } else {
            b1 = b;
            c1 = a;
        }
    } 

    printf("%d\n", a1);
    printf("%d\n", b1);
    printf("%d\n", c1);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}