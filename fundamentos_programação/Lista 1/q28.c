#include <stdio.h>

int main() {
  float area, lado;

  printf("Qual o lado do quadrado? ");
  scanf("%f", &lado);

  area = lado * lado;

  printf("A área do quadrado é de %.2f\n", area);
}