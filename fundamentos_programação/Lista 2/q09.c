#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    float nota;
    char conceito;

    printf("Qual foi a sua média?");
    scanf("%f", &nota);

    if (nota >= 9.0) {
        conceito = 'A';
    } else if (nota >= 7.5) {
        conceito = 'B';
    } else if (nota >= 6.0) {
        conceito = 'C';
    } else if (nota >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("APROVADO\n");
    } else {
        printf ("REPROVADO!\n");
    }

return 0;
}