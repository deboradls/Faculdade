#include <stdio.h>

int main() {
    int vetor[20];

    printf("Digite os elementos do vetor de 20 posições:\n");
    for (int i = 0; i < 20; i++) {
        printf("Vetor[%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < 20; i++) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = temp;
    }

    printf("\nVetor após a troca:\n");
    for (int i = 0; i < 20; i++) {
        printf("Vetor[%d]: %d\n", i + 1, vetor[i]);
    }

    return 0;
}
