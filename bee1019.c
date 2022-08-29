#include <stdio.h>

int main() {

    int n;
    int horas;
    int minutos;
    int segundos;
    int resto;

    scanf("%d", &n);

    horas = n/3600;
    
    if (horas <= 0){
        horas = 0;

    } else {
        n -= horas*3600;
    }
    

    minutos = n/60;
    n -= minutos*60;

    segundos = n;


    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}