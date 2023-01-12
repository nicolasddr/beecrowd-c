#include <stdio.h>

int main() {

    int diai, diaf, horai, horaf, minutoi, minutof, segundoi, segundof;
    int diad, horad, minutod, segundod, tempoi, tempof, tempot;

    scanf("Dia %d\n", &diai);
    scanf("%d : %d : %d\n", &horai, &minutoi, &segundoi);
    scanf("Dia %d\n", &diaf);
    scanf("%d : %d : %d", &horaf, &minutof, &segundof);

    tempoi = (diai*60*60*24) + (horai*60*60) + (minutoi*60) + segundoi;
    tempof = (diaf*60*60*24) + (horaf*60*60) + (minutof*60) + segundof;
    tempot = tempof - tempoi;

    diad = tempot/(60*60*24);
    tempot = tempot%(60*60*24);

    horad = tempot/(60*60);
    tempot = tempot%(60*60);

    minutod = tempot/60;
    tempot = tempot%60;

    segundod = tempot;

    printf("%d dia(s)\n", diad);
    printf("%d hora(s)\n", horad);
    printf("%d minuto(s)\n", minutod);
    printf("%d segundo(s)\n", segundod);
    
    return 0;
}