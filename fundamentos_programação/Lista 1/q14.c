#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.14; 

    printf("Qual o raio da pizza? ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área da pizza é de %.2f\n", area);

    return 0;
}
