#include <stdio.h>

int main() {
    float nota1, nota2, media_ponderada;
    int peso1 = 2, peso2 = 3;

    printf("Qual a primeira nota? ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota? ");
    scanf("%f", &nota2);

    media_ponderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

    printf("A média ponderada das notas é de %.2f\n", media_ponderada);

    return 0;
}
