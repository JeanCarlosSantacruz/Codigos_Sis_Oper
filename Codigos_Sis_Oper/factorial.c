#include <stdio.h>

long long factorial(int n) {
    if (n >= 0) {
        if (n == 0)
            return 1;
        else
            return n * factorial(n - 1);
    } else {
        printf("Error! Factorial de un número negativo no existe.");
        return -1;
    }
}

int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
    long long fact = factorial(num);
    if (fact != -1)
        printf("El factorial de %d es %lld.", num, fact);
    return 0;
}
