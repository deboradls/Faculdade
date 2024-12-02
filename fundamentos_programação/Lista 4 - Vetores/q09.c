#include <stdio.h>

int main() {
    int vetor[15];
    int i, maior, menor, posicao_maior, posicao_menor;

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 15; i++) {
        printf("Posição [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];
    posicao_maior = posicao_menor = 1;

    for (i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i + 1;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i + 1;
        }
    }

    printf("O maior elemento do vetor é %d e está na posição %d.\n", maior, posicao_maior);

    printf("O menor elemento do vetor é %d e está na posição %d.\n", menor, posicao_menor);

    return 0;
}
