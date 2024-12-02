#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int numero_int;

    printf("Qual número inteiro você deseja descobrir se é divisível por 10, 5, 2 ou por nenhuma das opções anteriores?");
    scanf("%d", &numero_int);

    //Código pra verificar se o número é divisível por 10, 5 e 2
    int divisivel_10 = (numero_int % 10 == 0);
    int divisivel_5 = (numero_int % 5 == 0);
    int divisivel_2 = (numero_int % 2 == 0);
   
    //Código que verifica se pelo menos uma das condições é verdadeira
    if (divisivel_10 || divisivel_5 || divisivel_2) {  
        printf("O número %d é divisível por", numero_int);

        //Código que imprime as opções que o número é divisível
        if (divisivel_10) 
            printf(" 10");
        if (divisivel_5) 
            printf(" 5");
        if (divisivel_2) 
            printf(" 2");

        printf("\n");
    } else { 
        printf("O número %d não é divisível por 10, 5 ou 2.\n", numero_int); //Código que imprime quando nenhuma das condições é verdadeira
    }
    return 0;
}