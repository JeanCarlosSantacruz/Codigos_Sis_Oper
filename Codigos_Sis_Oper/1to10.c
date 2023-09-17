#include <stdio.h>

int main() {
    printf("Decimal\tHexadecimal\tOctal\n");
    for(int i = 1; i <= 10; i++) {
        printf("%d\t%X\t\t%o\n", i, i, i);
    }
    return 0;
}
