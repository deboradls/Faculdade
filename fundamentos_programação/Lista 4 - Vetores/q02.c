#include <stdio.h>

int main() {
    int K[30];
    
    printf("Digite os elementos do vetor K[30]:\n");
    for (int i = 0; i < 30; i++) {
        printf("K[%d]: ", i + 1);
        scanf("%d", &K[i]);
    }

    for (int i = 0; i < 29; i += 2) {
        int temp = K[i];
        K[i] = K[i + 1];
        K[i + 1] = temp;
    }

    printf("\nVetor K[30] após a troca:\n");
    for (int i = 0; i < 30; i++) {
        printf("K[%d]: %d\n", i + 1, K[i]);
    }

    return 0;
}