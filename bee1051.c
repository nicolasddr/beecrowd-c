#include <stdio.h>

int main() {

    float renda, imposto;
    scanf("%f", &renda);

    if (renda <= 2000.00) {
        imposto = 0.00;
    } else if (renda >= 2000.01 && renda <= 3000.00) {
        imposto = (renda-2000.00)*0.08;
    } else if (renda >= 3000.01 && renda <= 4500.00) {
        imposto = (renda-3000.00)*0.18 + 1000.00*0.08;
    } else if (renda > 4500.00) {
        imposto = (renda-4500.00)*0.28 + 1000.00*0.08 + 1500.00*0.18;
    }

    if (imposto == 0.00) {
        printf("Isento\n");
    } else {
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}