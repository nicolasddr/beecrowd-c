#include <stdio.h>

int main() {

    int senhaCorreta=2002, senhaDigitada;

    while (1) {
        
        scanf("%d", &senhaDigitada);

        if (senhaDigitada != senhaCorreta) {
            printf("Senha Invalida\n");
        } else {
            printf("Acesso Permitido\n");
            break;
        }

    }

    return 0;
}