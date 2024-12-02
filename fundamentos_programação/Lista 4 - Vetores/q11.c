#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10], i;

    printf("Digite os elementos do vetor A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os elementos do vetor B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[9 - i];
    }

    printf("Vetor C (Resultado da subtração de A por B):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}