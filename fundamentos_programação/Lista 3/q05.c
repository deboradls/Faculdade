#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;

    // Solicita ao usuário um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é não negativo
    if (numero < 0) {
        printf("O fatorial de um número negativo não está definido.\n");
    } else {
        // Calcula o fatorial do número
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %d\n", numero, fatorial);
    }

    return 0;
}
