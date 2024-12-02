#include <stdio.h>

int main() {
    int vetor[15];
    int i, maior;

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 15; i++) {
        printf("Posição [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for (i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    for (i = 0; i < 15; i++) {
        vetor[i] *= maior;
    }

    printf("Vetor após multiplicação pelo maior valor (%d):\n", maior);
    for (i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
