#include <stdio.h>

int esBisiesto(int año) {
    if (año % 4 == 0) {
        if (anio % 100 == 0) {
            // el año es divisible por 400, por lo tanto, el año es un año bisiesto
            if (año % 400 == 0)
                return 1;
            else
                return 0;
        } else
            return 1;
    } else
        return 0;
}

int main() {
    int anio;
    printf("Introduce un año: ");
    scanf("%d", &año);
    if (esBisiesto(año)) {
        printf("%d Es un año bisiesto.", año);
    } else {
        printf("%d No es un año bisiesto.", año);
    }
    return 0;
}
