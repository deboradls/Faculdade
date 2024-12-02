#include <stdio.h>

int main(void) {
    float horas_normais, horas_extras, salario_bruto, salario_liquido;
    const float taxa_normal = 10.0, taxa_extras = 15.0, taxa_imposto = 0.10;

    printf("Qual a quantidade de horas normais trabalhadas? ");
    scanf("%f", &horas_normais);

    printf("Qual a quantidade de horas extras trabalhadas? ");
    scanf("%f", &horas_extras);

    salario_bruto = (horas_normais * taxa_normal) + (horas_extras * taxa_extras);
    salario_liquido = salario_bruto * (1.0 - taxa_imposto);

    printf("O salário bruto é R$ %.2f\n", salario_bruto);
    printf("O salário líquido é R$ %.2f\n", salario_liquido);

    return 0;
}
