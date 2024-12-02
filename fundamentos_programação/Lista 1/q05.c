#include <stdio.h>

int main(void) {

  int anos;

  printf("Quantos anos você tem? ");
  scanf("%d", &anos);
  printf("Você possui aproximadamente %d dias de vida", anos * 365);
}