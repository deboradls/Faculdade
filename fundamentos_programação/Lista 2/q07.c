#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float salario, novo_salario;
    char funcao;

    // Solicita ao usuário que insira o salário atual e sua função
    printf("Qual o seu salário atual? ");
    scanf("%f", &salario);
    printf("1 - Tecnico\n2 - Gerente\n3 - Outros\nQual a sua função? (escolha um número) " );
    scanf(" %c", &funcao);

    // Calcula o novo salário com base na função
    if (funcao == '1') {
        novo_salario = salario * 1.5; 
    } else if (funcao == '2') {
        novo_salario = salario * 1.3; 
    } else {
        novo_salario = salario * 1.2;
    }

    printf("O novo salário é de %.2f\n", novo_salario);

    return 0;
}