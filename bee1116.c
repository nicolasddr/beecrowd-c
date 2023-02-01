#include <stdio.h>

int main() {

    int n, num1, num2;
    double res;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d %d", &num1, &num2);

        if (num2 == 0) {
            printf("divisao impossivel\n");
        } else {
            res = (double) num1/num2;
            printf("%.1lf\n", res);
        }

    }

    return 0;
}