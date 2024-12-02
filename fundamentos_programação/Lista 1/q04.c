#include <stdio.h>

int main(void) {

  double pao, broa, total, totalpao, totalbroas, porc;
  pao = 0.5;
  broa = 1.5;

  printf("Qual o total de pães vendidos? ");
  scanf("%lf", &totalpao);
  printf("\nQual o total de broas vendidas? ");
  scanf("%lf", &totalbroas);

  totalpao = totalpao * pao;
  totalbroas = totalbroas * broa;
  total = totalpao + totalbroas;
  porc = total / 10;

  printf("\nTotal de vendas é %.2f \n Porcentagem é %.2f", total, porc);
}