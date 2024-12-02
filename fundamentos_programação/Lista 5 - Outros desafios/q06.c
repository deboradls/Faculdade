#include <stdio.h>

int somaArray(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int meuArray[tamanho];

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para o elemento %d: ", i + 1);
        scanf("%d", &meuArray[i]);
    }

    int resultado = somaArray(meuArray, tamanho);

    printf("A soma dos elementos do array é: %d\n", resultado);

    return 0;
}
