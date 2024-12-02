#include <stdio.h>
#include <stdlib.h>

int compararInteiros(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

float calcularMediana(int vetor[], int tamanho) {
    if (tamanho % 2 == 0) {
        return (float)(vetor[tamanho / 2 - 1] + vetor[tamanho / 2]) / 2;
    } else {
        return vetor[tamanho / 2];
    }
}

void exibirVetor(int vetor[], int tamanho, int inversa) {
    printf("Vetor na ordem %s:\n", inversa ? "inversa" : "normal");
    int passo = inversa ? -1 : 1;
    for (int i = inversa ? tamanho - 1 : 0; i >= 0 && i < tamanho; i += passo) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int N;
    int vetor[50];
    int tamanho = 0;

    do {
        printf("Digite um número inteiro (0 para encerrar): ");
        scanf("%d", &N);

        switch (N) {
            case 1:
                exibirVetor(vetor, tamanho, 0);
                break;
               case 2:
                exibirVetor(vetor, tamanho, 1);
                break;

            case 3:
                if (tamanho > 0) {
                    qsort(vetor, tamanho, sizeof(int), compararInteiros);
                    printf("Mediana: %.2f\n", calcularMediana(vetor, tamanho));
                } else {
                    printf("O vetor está vazio.\n");
                }
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        if (N != 0) {
            if (tamanho < 50) {
                printf("\nDigite um número para adicionar ao vetor: ");
                scanf("%d", &vetor[tamanho]);
                tamanho++;
            } else {
                printf("O vetor atingiu o limite de 50 elementos.\n");
            }
        }

    } while (N != 0);

    return 0;
}