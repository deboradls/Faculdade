#include <stdio.h>

int main(void) {
    double minutos, horas, segundos;
    
    printf("Qual o tempo em minutos? ");
    scanf("%lf", &minutos);

    horas = minutos / 60;
    int minutos_int = (int)minutos; 
    segundos = (minutos - minutos_int) * 60;

    printf("%.0lf horas %d minutos %.1lf segundos\n", horas, minutos_int, segundos);

    return 0;
}
