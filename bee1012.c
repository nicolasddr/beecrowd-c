#include <stdio.h>

int main() {

    double a;
    double b;
    double c;

    double area_trretangulo;
    double area_circulo;
    double area_trapezio;
    double area_quadrado;
    double area_retanguloAB;

    scanf("%lf %lf %lf", &a, &b, &c);

    area_trretangulo = (a*c)/2;
    area_circulo = 3.14159*(c*c);
    area_trapezio = ((a+b)*c)/2;
    area_quadrado = b*b;
    area_retanguloAB = a*b;

    printf("TRIANGULO: %.3f\n", area_trretangulo);
    printf("CIRCULO: %.3f\n", area_circulo);
    printf("TRAPEZIO: %.3f\n", area_trapezio);
    printf("QUADRADO: %.3f\n", area_quadrado);
    printf("RETANGULO: %.3f\n", area_retanguloAB);

    return 0;
}