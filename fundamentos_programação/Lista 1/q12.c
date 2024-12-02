#include <stdio.h>

int main(void) {
    float salario_inicial, salario_aumento, salario_final;
   
    printf("Digite o salário inicial: R$ ");
    scanf("%f", &salario_inicial);

    salario_aumento = salario_inicial * 1.15;

    salario_final = salario_aumento * 0.92;

    printf("O salário com aumento de 15% é de R$ %.2f\n", salario_aumento);
    printf("O salário final com desconto do impostos é de R$ %.2f\n", salario_final);

    return 0;
}
