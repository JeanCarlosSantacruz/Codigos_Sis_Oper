#include <stdio.h>

int fibserie() {
    int n, a = 0, b = 1, c, i;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("Serie Fibonacci: ");
    for (i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    return 0;
}
