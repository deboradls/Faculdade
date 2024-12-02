#include <stdio.h>

int main(void) {
    float peso_kg, peso_grama, peso_engordar, peso_emagrecer;
    const float fator_gramas = 1000.0, taxa_engordar = 0.15, taxa_emagrecer = 0.20;

    printf("Qual o peso em quilos? ");
    scanf("%f", &peso_kg);

    peso_grama = peso_kg * fator_gramas;
    peso_engordar = peso_kg + (taxa_engordar * peso_kg);
    peso_emagrecer = peso_kg - (taxa_emagrecer * peso_kg);

    printf("(a) O peso em gramas é de %.2f\n", peso_grama);
    printf("(b) O novo peso ao engordar 15%%: %.2f quilos\n", peso_engordar);
    printf("(c) O novo peso ao emagrecer 20%%: %.2f quilos\n", peso_emagrecer);

    return 0;
}
