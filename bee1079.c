#include <stdio.h>

int main() {

    int n;
    float num1, num2, num3, media;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f %f %f", &num1, &num2, &num3);
        media = ((2*num1) + (3*num2) + (5*num3))/10;
        printf("%.1f\n", media);
    }

    return 0;
}