#include <stdio.h>

int main() {

    int distancia;
    double combustivel;
    double consumo;

    scanf("%d", &distancia);
    scanf("%lf", &combustivel);

    consumo = distancia/combustivel;

    printf("%.3f km/l\n", consumo);

    return 0;
}