#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int K[15];
    
    printf("Digite os 15 valores inteiros não negativos:\n");
    for (int i = 0; i < 15; i++) {
        printf("K[%d]: ", i + 1);
        scanf("%d", &K[i]);
    }

    printf("\nVetor P contendo os números primos de K: ");
    for (int i = 0; i < 15; i++) {
        if (ehPrimo(K[i])) {
            printf("%d \n", K[i]);
        }
    }

    return 0;
}
