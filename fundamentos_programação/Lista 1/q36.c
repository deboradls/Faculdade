#include <stdio.h>

int main(void) {
    const double polegadas_cm = 2.54;
    double altura_cm, largura_cm, comprimento_cm, perimetro_cm, perimetro_polegada;

    printf("Qual a altura da bagagem (em centímetros)? ");
    scanf("%lf", &altura_cm);

    printf("Qual a largura da bagagem (em centímetros)? ");
    scanf("%lf", &largura_cm);

    printf("Qual o comprimento da bagagem (em centímetros)? ");
    scanf("%lf", &comprimento_cm);

    perimetro_cm = 2 * (altura_cm + largura_cm + comprimento_cm);

    perimetro_polegada = perimetro_cm / polegadas_cm;

    printf("O perímetro em centímetros é %.2lf cm\n", perimetro_cm);
    printf("O perímetro em polegadas é %.2lf in\n", perimetro_polegada);

    return 0;
}
