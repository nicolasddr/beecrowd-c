#include <stdio.h>

int main() {

    double a;
    double b;
    double c;
    double media;
    double x = 10.0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    media = ((a*2.0) + (b*3.0) + (c*5.0))/10;

    printf("MEDIA = %.1f\n", media);

    return 0;
}