#include <stdio.h>

int main() {
    int numero = 2;

    printf("Números pares entre 2 e 50:\n");

    while (numero <= 50) {
        if (numero % 2 == 0) {
            printf("%d\n", numero);
        }
        numero++;
    }

    return 0;
}
