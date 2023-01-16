#include <stdio.h>
 
int main() {

    int num, cont=0, i=0;
    scanf("%d", &num);

    if (num % 2 != 0 ) {
        for (int i = 0; i < 12; i+=2) {
            printf("%d\n", num+i);
        }
    
    } else {
        for (int i = 1; i < 12; i+=2) {
            printf("%d\n", num+i);
        }
    
    }

    return 0;
}