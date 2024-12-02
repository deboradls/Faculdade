#include <stdio.h>

int main() {
    int quant_blusas;
    float quant_novelos;

    printf("Qual a quantidade total de blusas produzidas? ");
    scanf("%d", &quant_blusas);

    printf("Qual a quantidade total de novelos de lã gastos? ");
    scanf("%f", &quant_novelos);

    float novelos_blusa = quant_novelos / quant_blusas;

    printf("A quantidade de novelos de lã gastos por blusa é de %.2f\n", novelos_blusa);

    return 0;
}
