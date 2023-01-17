#include <stdio.h>

int main() {

    int maior=0, pos=0, num, count=0;

    for (int i = 0; i < 100; i++) {   
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
            pos = i+1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}

