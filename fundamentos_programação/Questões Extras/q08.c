#include <stdio.h>

int main(void) {
    int numeros[10], pares[10], contador = 0;

    printf("Escolha 10 números\n");

    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[contador] = numeros[i];
            contador++;
        }
    }

    if (contador > 0) {
        printf("Os números pares escolhidos foi: ");
        for (int i = 0; i < contador; i++) {
            printf("%d ", pares[i]); 
        }
        printf("\nA quantidade de números pares é %d\n", contador);
    } else {
        printf("Nenhum dos números escolhidos é par.\n");
    }

    return 0;
}
