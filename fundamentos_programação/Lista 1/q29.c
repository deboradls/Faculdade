#include <stdio.h>

int main(void) {
    float diagonal_maior, diagonal_menor, area;

    printf("Qual o valor da diagonal maior do losango? ");
    scanf("%f", &diagonal_maior);

    printf("Qual o valor da diagonal menor do losango? ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2.0;

    printf("A área do losango é de %.2f\n", area);

    return 0;
}
