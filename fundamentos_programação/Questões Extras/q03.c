#include <stdio.h>
#include <math.h>

int main (void){
    double numeros[10];
    double soma = 0.0;

    printf("Escolha e digite 10 números (tecle enter apos cada número)\n");

    for (int i = 0; i < 10; i++){
    scanf("%lf", &numeros[i]);
    soma += numeros[i];
    }

double media = soma / 10.0;

printf("A soma dos números escolhidos é %.2lf\n", soma);
printf("A média dos números escolhidos é de %.2lf\n", media);

return 0;

}