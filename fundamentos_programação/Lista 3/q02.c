#include <stdio.h>

int main() {
    int soma = 0;
    int numero;

    for (numero = 1; numero <= 100; numero++) {
        soma += numero;
    }

    printf("A soma de todos os números de 1 a 100 é: %d\n", soma);

    return 0;
}