#include <stdio.h>
#include <math.h>

int main(void) {
  double x1, y1, x2, y2, distancia;

  printf("Qual as coordenadas do primeiro ponto (x1, y1)? ");
  scanf("%lf %lf", &x1, &y1);
  printf("Qual as coordenadas do segundo ponto (x2, y2)? ");
  scanf("%lf %lf", &x2, &y2);

  distancia = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
  printf("A distância entre os pontos %.2lf, %.2lf e %.2lf, %.2lf é de %.2lf\n", x1, y1, x2, y2, distancia);

  return 0;
}
