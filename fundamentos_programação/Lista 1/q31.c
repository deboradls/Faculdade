#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual;
    int idade_anos, idade_meses, idade_dias, idade_semanas;

    printf("Qual o ano de nascimento? ");
    scanf("%d", &ano_nascimento);

    printf("Qual o ano atual? ");
    scanf("%d", &ano_atual);

    idade_anos = ano_atual - ano_nascimento;
    idade_meses = idade_anos * 12;
    idade_dias = idade_anos * 365;
    idade_semanas = idade_anos * 52;

    printf("A idade em anos é %d\n", idade_anos);
    printf("A idade em meses é %d\n", idade_meses);
    printf("A idade em dias é %d\n", idade_dias);
    printf("A idade em semanas é %d\n", idade_semanas);

    return 0;
}
