#include <stdio.h>

int main(void) {
    float salario, conta1, conta2, multa1, multa2, saldo_restante;
    const float taxa_multa = 0.02;

    printf("Qual o valor do salário de João? ");
    scanf("%f", &salario);

    printf("Qual o valor da primeira conta? ");
    scanf("%f", &conta1);

    printf("Qual o valor da segunda conta? ");
    scanf("%f", &conta2);

    multa1 = conta1 * taxa_multa;
    multa2 = conta2 * taxa_multa;

    saldo_restante = salario - (conta1 + multa1 + conta2 + multa2);

    printf("O saldo restante após o pagamento das contas é de R$ %.2f\n", saldo_restante);

    return 0;
}
