#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int animal;
    float condominio = 350.00;

    printf("1 - Gato\n");
    printf("2 - Papagaio\n");
    printf("3 - Cão\n");
    printf("4 - Nenhum animal de estimação\n");
    printf("Qual o tipo de animal de estimação? (escolha o número)\n");
    scanf("%d", &animal);

    switch (animal) {
        case 1:
            condominio += 30.00;
            break;
        case 2:
            condominio += 12.00;
            break;
        case 3:
            condominio += 50.00;
            break;
        default:
            condominio -= 20.00;
            break;
    }

    printf("O valor a ser pago de condomínio é de R$%.2f\n", condominio);

    return 0;
}