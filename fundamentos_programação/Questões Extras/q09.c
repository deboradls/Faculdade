#include <stdio.h>

int main(void){
    int nascimento, maior = 0, velho = 0;

    printf("Escolha o ano de nascimento de 5 pessoas:\n");

    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf("%d", &nascimento);
       
       int idade = 2023 - nascimento;

        if (idade >= 18){
            maior++;    
        } if (idade > 65) {
            velho++;
        }
    }

    printf("Quantidade de pessoas maiores de idade: %d\n", maior);
    printf("Quantidade de pessoas com mais de 65 anos: %d\n", velho);

    return 0;
}
