#include <stdio.h>

int main() {

    double i;
    int j;

    for (i = 0.0; i < 2.0; i+=0.2) {
        for (j = 1; j <= 3; j++) {
            printf("I=%g J=%g\n", i, j+i);
        }
    }

    return 0;
}


