#include <stdio.h>

int main(void) {
    int quant_sanduiches;
    
    printf("Qual a quantidade de sanduíches a fazer? ");
    scanf("%d", &quant_sanduiches);

    float kgqueijo = 0.002 * quant_sanduiches;
    float kgpresunto = 0.001 * quant_sanduiches;
    float kgcarne = 0.1 * quant_sanduiches;

    printf("A quantidade de queijo necessária é de %.2f kg\n", kgqueijo);
    printf("A quantidade de presunto necessária é de %.2f kg\n", kgpresunto);
    printf("A quantidade de carne necessária é de %.2f kg\n", kgcarne);

    return 0;
}
