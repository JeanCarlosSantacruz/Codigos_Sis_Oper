#include <stdio.h>

int esMayuscula(char c) {
    if(c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char c;
    printf("Introduce una letra: ");
    scanf("%c", &c);
    if (esMayuscula(c)) {
        printf("'%c' Es una letra mayúscula.", c);
    } else {
        printf("'%c' No es una letra mayúscula.", c);
    }
    return 0;
}
