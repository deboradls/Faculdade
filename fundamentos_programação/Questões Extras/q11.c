#include <stdio.h>

int main(void){
    char nome[50];
    int ano = 0;

    printf("Qual o seu nome?\n");
    gets(nome);
    printf("Qual o seu ano de nascimento?\n");
    scanf("%d", &ano);

    printf("%s, você tem %d anos\n", nome, (2023 - ano));

}