#include <stdio.h>

int maximo(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;
}

int main() {
    int num1, num2, num3;
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    printf("Introduce el tercer número: ");
    scanf("%d", &num3);
    int max = maximo(num1, num2, num3);
    printf("El número más grande es: %d", max);
    return 0;
}
