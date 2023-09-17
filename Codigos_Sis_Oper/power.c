#include <stdio.h>

double potencia(double base, int exponente) {
    if (exponente != 0)
        return (base * potencia(base, exponente - 1));
    else
        return 1;
}

int main() {
    double base;
    int exponente;
    printf("Introduce la base: ");
    scanf("%lf", &base);
    printf("Introduce el exponente: ");
    scanf("%d", &exponente);
    double resultado = potencia(base, exponente);
    printf("%.2lf^%d = %.2lf", base, exponente, resultado);
    return 0;
}
