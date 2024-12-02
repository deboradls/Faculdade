#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    char apartamento;
    int quant_diarias;
    float valor_consumo, valor_diaria, valor_total, subtotal, taxa_servico, total_geral;

    printf("Qual o tipo do apartamento (A, B, C ou D)? ");
    scanf(" %c", &apartamento);
    apartamento = toupper(apartamento);
        //biblioteca ctype: converte o caractere digitado em maiusculo, evitando erros

    printf("\nQual o número de diárias utilizadas? ");
    scanf("%d", &quant_diarias);

    printf("\nQual o valor do consumo interno? ");
    scanf("%f", &valor_consumo);

    switch (apartamento) {
        case 'A':
            valor_diaria = 150.0;
            break;
        case 'B':
            valor_diaria = 100.0;
            break;
        case 'C':
            valor_diaria = 75.0;
            break;
        case 'D':
            valor_diaria = 175.0;
            break;
        default:
            printf("Tipo de apartamento inválido!\n");
            return 1; // encerra o programa com código de erro
    }

    valor_total = quant_diarias * valor_diaria;
    subtotal = valor_total + valor_consumo;
    taxa_servico = 0.10 * subtotal;
    total_geral = subtotal + taxa_servico;

    printf("Conta final do hóspede:\n");
    printf("Valor total das diárias: %.2f\n", valor_total);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Taxa de serviço: %.2f\n", taxa_servico);
    printf("Total geral: %.2f\n", total_geral);

    return 0;
}