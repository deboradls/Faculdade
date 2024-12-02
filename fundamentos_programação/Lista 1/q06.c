#include <stdio.h>

int main(void){
  float preco, litros, quantidade;

  printf("Qual o preço do litro da gasolina? ");
  scanf("%f", &preco);

  printf("Quanto de gasolina você pagou? ");
  scanf("%f", &quantidade);

  litros = quantidade / preco;

  printf("Você colocou %d litros\n", litros);
}