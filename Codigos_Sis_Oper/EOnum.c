#include <stdio.h>

void esPar(int num) {
    if (num % 2 == 0)
        printf("%d Es un número par.", num);
    else
        printf("%d Es un número impar.", num);
}

int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
    esPar(num);
    return 0;
}
