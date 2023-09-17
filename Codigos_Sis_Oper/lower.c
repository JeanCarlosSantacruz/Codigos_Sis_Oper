#include <stdio.h>

int esMayuscula(char c) {
    if(c >= 'a' && c <= 'z') {
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
        printf("'%c' Es una letra minuscula.", c);
    } else {
        printf("'%c' No es una letra minuscula.", c);
    }
    return 0;
}
