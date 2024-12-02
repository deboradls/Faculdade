#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    float compra, venda;

    printf("Qual o valor de compra do produto: R$");
    scanf("%f", &compra);

    if (compra <= 20.0) {
        venda = compra * 1.45;
    } else {
        venda = compra *1.30;
    }

printf("O valor de venda do produto é de R$ %.2f", venda);

return 0;

}