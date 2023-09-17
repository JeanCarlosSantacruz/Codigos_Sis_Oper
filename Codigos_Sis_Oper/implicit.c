#include <stdio.h>

int implicit() {
    int i = 10;
    float f;
    f = i;
    printf("Variable: %d\n", i);
    printf("Tipo de llamado implicito: %f\n", f);
    f = (float)i;
    printf("Tipo de llamado explicito: %f\n", f);
    return 0;
}