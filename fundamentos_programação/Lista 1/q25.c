#include <stdio.h>

int main(void) {
    float salario_fixo, vendas, comissao, salario_final;
    const float taxa_comissao = 0.04;

    printf("Qual o salário fixo do funcionário? ");
    scanf("%f", &salario_fixo);

    printf("Qual o valor das vendas do funcionário? ");
    scanf("%f", &vendas);

    comissao = vendas * taxa_comissao;
    salario_final = salario_fixo + comissao;

    printf("A comissão é R$ %.2f\n", comissao);
    printf("O salário final é R$ %.2f\n", salario_final);

    return 0;
}
