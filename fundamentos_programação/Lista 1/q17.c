#include <stdio.h>

int main(void) {
    float temperatura_celsius, temperatura_fahrenheit;

    printf("Qual a temperatura em graus Celsius? ");
    scanf("%f", &temperatura_celsius);

    temperatura_fahrenheit = (temperatura_celsius * 9/5) + 32;

    printf("A temperatura em fahrenheit é %.2f\n", temperatura_fahrenheit);

    return 0;
}
