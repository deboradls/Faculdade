#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float salario, financiamento, salario_conjuge;

//Código que solicitar o valor do salário da pessoa
printf("Qual o valor do seu salário?");
scanf("%f", &salario);

//Código que solicitar o valor do financiamento pretendido
printf("Qual o valor do financiamento pretendido?");
scanf("%f", &financiamento);

    if (financiamento <= 5 * salario) {
        printf("Financiamento concedido\n");
    } else {
        // Caso o financiamento seja maior que 5 vezes o salário da pessoa
        printf("Qual o valor do salário do seu cônjuge?");
        scanf("%f", &salario_conjuge);

    if (financiamento <= 5 * (salario + salario_conjuge)) {
        printf("Financiamento concedido\n");
    } else {
        printf("Financiamento negado\n");
    }
    }
printf("Obrigado(a) por nos consultar.\n");

return 0;
}