#include <stdio.h>

int main(void) {
  float lata, garrafa_600, garrafa_2, qtd_litros;

  printf("Quantas latinhas de 350 ml o comerciante comprou? ");
  scanf("%f", &lata);

  printf("Quantas garrafas de 600 ml o comerciante comprou? ");
  scanf("%f", &garrafa_600);

  printf("Quantas garrafas de 2 litros o comerciante comprou? ");
  scanf("%f", &garrafa_2);

  qtd_litros = (lata * 0.35) + (garrafa_600 * 0.6) + (garrafa_2 * 2);

  printf("A quantidade em litros que o comerciante comprou foi: %.2f\n", qtd_litros);
}