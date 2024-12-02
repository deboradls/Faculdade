#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (void) {
    double valor_compra;
    int nascimento, numero_sorte;

//Código onde solicita valor da compra
printf ("Qual o valor total da sua compra?");
scanf ("%lf", &valor_compra);

//Código onde solicita nascimento
printf ("Qual o ano do seu nascimento?");
scanf ("%d", &nascimento);

//Código onde obtem o ano atual
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int ano_atual = tm.tm_year + 1900;

//Código que calcula a idade do usuário
    int idade = ano_atual - nascimento;
printf("Sua idade é %d anos\n", idade);

//Código onde calcula o número da sorte
    if (valor_compra < 500.00) {
        numero_sorte = fabs(5000 - valor_compra * nascimento);
    } else if (valor_compra > 500.00) {
        numero_sorte = fabs(50000 - valor_compra * nascimento);
    } else {
        numero_sorte = nascimento * nascimento;
    }
//A função fabs (da biblioteca <math.h>) foi usada para garantir que o número da sorte não seja negativo, independente do cálculo executado
printf("Seu número da sorte é %d\n", numero_sorte);

return 0;
}