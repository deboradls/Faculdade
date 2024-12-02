#include <stdio.h>

int main() {
    float dinheiro_reais, dinheiro_dolar, dinheiro_alemão, dinheiro_libra;
    const float cotacao_dolar = 5.65;
    const float coracao_alemao = 3.27;
    const float cotacao_libra = 7.48;

    printf("Qual a quantidade de dinheiro em reais? ");
    scanf("%f", &dinheiro_reais);

    dinheiro_dolar = dinheiro_reais / cotacao_dolar;
    dinheiro_alemão = dinheiro_reais / coracao_alemao;
    dinheiro_libra = dinheiro_reais / cotacao_libra;

    printf("A quantidade de dinheiro em dólar é de $%.2f\n", dinheiro_dolar);
    printf("A quantidade de dinheiro em marco alemão é de %.2f DEM\n", dinheiro_alemão);
    printf("A quantidade de dinheiro em libra esterlina é de %.2f GBP\n", dinheiro_libra);

    return 0;
}
