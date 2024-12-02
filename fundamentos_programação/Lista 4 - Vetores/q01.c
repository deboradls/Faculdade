#include <stdio.h>

int main() {
    float N[20];
    float menor;
    int i, posicao;

    printf("Digite os elementos do vetor N[20]:\n");
    for (i = 0; i < 20; i++) {
        printf("N[%d]: ", i + 1);
        scanf("%f", &N[i]);
    }

    menor = N[0];
    posicao = 0;

    for (i = 1; i < 20; i++) {
        if (N[i] < menor) {
            menor = N[i];
            posicao = i;
        }
    }

    printf("O menor elemento de N é %.2f e sua posição dentro do vetor é %d.\n", menor, posicao + 1);

    return 0;
}
