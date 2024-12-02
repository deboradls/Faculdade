#include <stdio.h>

int main() {
    double a, b;
    int operacao;

    // Solicita ao usuário os números e a operação desejada
    printf("Digite o primeiro número (a): ");
    scanf("%lf", &a);

    printf("Digite o segundo número (b): ");
    scanf("%lf", &b);

    printf("Escolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da operação desejada: ");
    scanf("%d", &operacao);

    // Realiza a operação selecionada e exibe o resultado
    switch (operacao) {
        case 1:
            printf("Resultado: %.2lf\n", a + b);
            break;
        case 2:
            printf("Resultado: %.2lf\n", a - b);
            break;
        case 3:
            printf("Resultado: %.2lf\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Resultado: %.2lf\n", a / b);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
    }

    return 0;
}
