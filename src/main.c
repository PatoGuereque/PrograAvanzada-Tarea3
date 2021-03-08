#include <stdio.h>
#include "../lib/distancias/distancias.h"

int main(int argc, char *argv[]) {
    float dlrecta;
    int dhoriz, dvert, xpm_res, ypm_res;
            
    dlrecta = dlr(3, 4, 10, 12);
    printf("Distancia en línea recta: %f\n", dlrecta);

    dhoriz = dh(3, 4, 10, 12);
    dvert = dv(3, 4, 10, 12);
    printf("Distancia horizontal: %d\n", dhoriz);
    printf("Distancia vertical: %d\n", dvert);

    printf("Punto A: (0, 0), Punto B: (10, 20)\n");
    xpm_res = xpm(0, 0, 10, 20);
    ypm_res = ypm(0, 0, 10, 20);
    printf("Coordenada x en medio: %d\n", xpm_res);
    printf("Coordenada y en medio: %d\n", ypm_res);
    return 0;
}