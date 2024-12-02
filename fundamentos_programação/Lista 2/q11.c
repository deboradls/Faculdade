#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    double valor_compra, valor_parcela, valor_total;
    int numero_parcelas;

printf ("Qual o valor das compras a vista? R$ ");
scanf ("%lf", &valor_compra);
printf ("Qual a quantidade de parcelas: 1, 2 ou 3? ");
scanf("%d", &numero_parcelas);

    switch (numero_parcelas) {
    case 1:
        valor_parcela = valor_compra;
        break;
    case 2:
        valor_parcela = valor_compra *1.1 / 2;
        break;
    case 3:
        valor_parcela = valor_compra * 1.2 /3;
        break;
    default:
    numero_parcelas = 3;
    valor_parcela = valor_compra *1.2 / 3;
    }

valor_total = valor_parcela * numero_parcelas;

    printf ("O número de parcelas é %d\n", numero_parcelas);
    printf ("O valor total de cada parcela é de %.2lf\n", valor_parcela);
    printf ("O valor total que deve ser pago é de R$ %.2lf\n", valor_total);

return 0;
}