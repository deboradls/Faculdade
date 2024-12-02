#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcula e imprime a tabuada do número de 1 a 10
    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        printf("%dx%d = %d\n", numero, i, resultado);
    }

    return 0;
}
