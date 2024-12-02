#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main() {
    int N;

    while (1) {
        printf("Qual a quantidade de elementos no vetor? (máximo de 10 elementos): ");
        scanf("%d", &N);

        if (N >= 1 && N <= 10) {
            break; 
        } else {
            printf("Por favor, insira um número entre 1 e 10.\n");
        }
    }

    int vetor[N];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    ordenarVetor(vetor, N);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
