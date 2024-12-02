#include <stdio.h>

int main(void) {
    float litros_refresco, litros_agua, litros_maracuja;

    printf("Qual a quantidade desejada de litros de refresco? ");
    scanf("%f", &litros_refresco);

    litros_agua = (4.0 / 5.0) * litros_refresco;

    litros_maracuja = (1.0 / 5.0) * litros_refresco;

    printf("Para fazer %.2f litros de refresco, você precisa de: \n", litros_refresco);
    printf("%.2f litros de água mineral\n", litros_agua);
    printf("%.2f litros de suco de maracujá\n", litros_maracuja);

    return 0;
}
