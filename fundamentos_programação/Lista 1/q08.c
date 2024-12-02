#include <stdio.h>

int main (void) {
  int dia, mes, dias_passados;

  printf("Qual o dia? ");
  scanf("%d", &dia);
  printf("Qual o mês? (digite o número correspondente ao mês) ");
  scanf("%d", &mes);

  dias_passados = (mes - 1) * 30 + dia;
  printf("Foram %d dias passados desde o inicio do ano.\n", dias_passados);
}