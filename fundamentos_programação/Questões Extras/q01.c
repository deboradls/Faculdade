#include <stdio.h>

int main (void){
    double soma = 0.0; //cogitei em fazer com a variável int, mas o usuário poderia querer fazer a soma de números decimais

    printf ("Escolha e digite 5 números (tecle enter após digitar cada número)");

        for (int i = 0; i < 5; i++){
        double numero;
        scanf("%lf", &numero);
        soma += numero;
    }

    printf("A soma dos números escolhido é %.2lf\n", soma);

    return 0;
}