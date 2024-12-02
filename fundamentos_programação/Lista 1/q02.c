#include <stdio.h>

int main(void) {
    double largura, comprimento, area;

    printf("Qual a largura do terreno? ");
    scanf("%lf", &largura);

    printf("Qual o comprimento do terreno? ");
    scanf("%lf", &comprimento);

    area = largura * comprimento;

    printf("A área do terreno é %.2f", area);

    return 0;
}