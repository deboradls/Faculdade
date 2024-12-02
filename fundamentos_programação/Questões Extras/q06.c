#include <stdio.h>

int main(void) {
    int nascimento, soma_idade = 0;

    printf("Digite o ano de nascimento de 10 pessoas:\n");

    for (int i = 0; i < 10; i++){
        printf("Pessoa %d: ", i + 1);
        scanf("%d", &nascimento);

        int idade = 2023 - nascimento;
        soma_idade += idade;
    }
    
    double media = (double)soma_idade / 10.0;
    printf("A média das idades é de %.2lf", media);

    return 0;
}