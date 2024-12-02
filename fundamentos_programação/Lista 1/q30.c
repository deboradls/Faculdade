#include <stdio.h>

int main() {
    float salario_minimo, salario_funcionario, quant_salario;

    printf("Qual o valor do salário mínimo? ");
    scanf("%f", &salario_minimo);

    printf("Qual o valor do salário do funcionário? ");
    scanf("%f", &salario_funcionario);

    quant_salario = salario_funcionario / salario_minimo;

    printf("O funcionário ganha %.2f salários mínimos.\n", quant_salario);

    return 0;
}
