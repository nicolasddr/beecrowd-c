#include <stdio.h>

int main() {

    int tempo;
    int velocidade;
    int distancia;
    double litros;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    distancia = tempo*velocidade;

    litros = distancia/12.0;

    printf("%.3f\n", litros);

    return 0;
}