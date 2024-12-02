#include <stdio.h>

int main(void) {
    float base_maior, base_menor, altura, area;

    printf("Qual o valor da base maior do trapézio? ");
    scanf("%f", &base_maior);

    printf("Qual o valor da base menor do trapézio? ");
    scanf("%f", &base_menor);

    printf("Qual o valor da altura do trapézio? ");
    scanf("%f", &altura);

    float soma_bases = base_maior + base_menor;
    area = (soma_bases * altura) / 2.0;

    printf("A área do trapézio é de %.2f\n", area);

    return 0;
}
