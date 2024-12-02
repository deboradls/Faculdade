#include <stdio.h>

int main() {
    int num_frangos;
    float custo_chip = 4.0, anel_alimento = 3.5, custo_total;

    printf("Qual o número de frangos a serem marcados? ");
    scanf("%d", &num_frangos);

    float chip_total = num_frangos * custo_chip;

    float custo_alimento = 2 * num_frangos * anel_alimento;

    custo_total = chip_total + custo_alimento;

    printf("O gasto total da granja para marcar todos os frangos é de R$ %.2f\n", custo_total);

    return 0;
}
