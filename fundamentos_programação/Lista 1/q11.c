#include <stdio.h>

int main() {
    int dias_trabalhados;
    int anos, meses, dias;

    printf("Qual a quantidade de dias trabalhados sem acidentes? ");
    scanf("%d", &dias_trabalhados);

    anos = dias_trabalhados / 360; 
    dias_trabalhados %= 360; 

    meses = dias_trabalhados / 30;
    dias = dias_trabalhados % 30;

  
    printf("Isso equivale a %d anos, %d meses e %d dias.\n", anos, meses, dias);

    return 0;
}
