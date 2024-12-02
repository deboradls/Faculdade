#include <stdio.h>

int main(void) {  

  int qntcavalos, ferraduras;

  printf("Quantos cavalos tem?\n");
  scanf("%d", &qntcavalos);

  ferraduras = qntcavalos * 4;

  printf("A quantidades de ferraduras necessárias para todos os cavalos é de %d", ferraduras);
}