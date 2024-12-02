#include <stdio.h>

int main(void) {
    int qtd_p, qtd_m, qtd_g;
    float preco_p = 10.0, preco_m = 12.0, preco_g = 15.0, valor_total;

    printf("Qual a quantidade de camisetas pequenas vendidas: ");
    scanf("%d", &qtd_p);
    printf("Digite a quantidade de camisetas médias vendidas: ");
    scanf("%d", &qtd_m);
    printf("Digite a quantidade de camisetas grandes vendidas: ");
    scanf("%d", &qtd_g);

    valor_total = (qtd_p * preco_p) + (qtd_m * preco_m) + (qtd_g * preco_g);

    printf("O valor total arrecadado é de R$ %.2f\n", valor_total);

    return 0;
}
