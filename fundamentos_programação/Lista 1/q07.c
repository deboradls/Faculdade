#include <stdio.h>

int main (void){

  double preco, peso;
  
  printf("Qual o peso do prato: ");
  scanf("%lf",&peso);
  
  preco = peso * 32;
  printf("O valor total do prato é de %.2f\n", preco);
}