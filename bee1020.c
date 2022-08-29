#include <stdio.h>

int main() {

    int n;
    int anos;
    int meses;
    int dias;

    scanf("%d", &n);

    anos = n/365;

    meses = (n%365)/30;

    dias = (n%365)%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}