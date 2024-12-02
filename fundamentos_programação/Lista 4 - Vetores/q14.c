#include <stdio.h>

int encontrarSomaMaxima(int array[], int n) {
    int maxAtual = array[0];
    int maxGlobal = array[0];

    for (int i = 1; i < n; i++) {
        // Atualiza a soma atual ou reinicia se o próximo elemento for maior
        maxAtual = (array[i] > maxAtual + array[i]) ? array[i] : maxAtual + array[i];

        // Atualiza a soma máxima global
        if (maxAtual > maxGlobal) {
            maxGlobal = maxAtual;
        }
    }

    return maxGlobal;
}

int main() {
    int n;

    // Solicitar ao usuário o número de elementos na sequência
    printf("Digite o número de elementos na sequência: ");
    scanf("%d", &n);

    // Verificar se o número de elementos é válido
    if (n <= 0) {
        printf("O número de elementos deve ser maior que zero.\n");
        return 1;  // Encerrar o programa com código de erro
    }

    // Declarar um array para armazenar a sequência de números inteiros
    int sequencia[n];

    // Solicitar ao usuário a sequência de números
    printf("Digite a sequência de números inteiros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }

    // Encontrar a soma máxima do segmento
    int somaMaxima = encontrarSomaMaxima(sequencia, n);

    // Imprimir o resultado
    printf("A soma do segmento de soma máxima é: %d\n", somaMaxima);

    return 0;
}