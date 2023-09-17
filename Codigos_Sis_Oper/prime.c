#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1) return 0; // cero y uno no son primos
    if (num % 2 == 0 && num > 2) return 0; // los números pares no son primos
    for(int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
    if (esPrimo(num)) {
        printf("%d Es un número primo.", num);
    } else {
        printf("%d No es un número primo.", num);
    }
    return 0;
}
