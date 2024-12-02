#include <stdio.h>

int main(void) {
    int numero, centena, dezena, unidade;

    printf("Escolha e digite um número inteiro de até três dígitos: ");
    scanf("%d", &numero);

    centena = numero / 100 * 100;
    dezena = (numero / 10) % 10 * 10;
    unidade = numero % 10;

    printf("Centena = %d\n", centena);
    printf("Dezena = %d\n", dezena);
    printf("Unidade = %d\n", unidade);

    return 0;
}
