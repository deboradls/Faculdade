#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int A, B, operacao_valida = 0;
    char operacao;

    printf("Qual o primeiro número? ");
    scanf("%d", &A);
    printf("Qual o segundo número? ");
    scanf("%d", &B);

    while (!operacao_valida){
        printf("Qual a operação desejada (+, -, * ou /)? ");
        scanf(" %c", &operacao);

        int resultado;
        float resultado_flut;

        if (operacao == '+') {
            resultado = A + B;
            printf("Resultado de %d + %d = %d\n", A, B, resultado);
            operacao_valida = 1;
        } else if (operacao == '-') {
            resultado = A - B;
            printf("Resultado de %d - %d = %d\n", A, B, resultado);
            operacao_valida = 1;
        } else if (operacao == '*') {
            resultado = A * B;
            printf("Resultado de %d * %d = %d\n", A, B, resultado);
            operacao_valida = 1;
        } else if (operacao == '/') {
            if (B != 0) {
                resultado_flut = (float)A / B;
                printf("Resultado de %d / %d = %.2f\n", A, B, resultado_flut);
                operacao_valida = 1;
            } else {
                printf("ERRO! Não é permitido divisão por zero.\n");
            } 
    } else {
        printf("Operação invalida.\nPor gentileza, escolha uma operação válida.\n");
    }
}
    
    return 0;
}