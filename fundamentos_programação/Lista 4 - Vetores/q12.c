#include <stdio.h>

int main() {
    int n;

    // Solicitar ao usuário o número de dígitos nas sequências
    printf("Digite o número de digitos nas sequências: ");
    scanf("%d", &n);

    int seq1[n], seq2[n], resultado[n + 1];

    // Solicitar ao usuário os dígitos da primeira sequência
    printf("Digite os digitos da primeira sequência:\n");
    for (int i = 0; i < n; i++) {
        scanf("%1d", &seq1[i]); // Lê um único dígito
    }

    // Solicitar ao usuário os dígitos da segunda sequência
    printf("Digite os digitos da segunda sequência:\n");
    for (int i = 0; i < n; i++) {
        scanf("%1d", &seq2[i]); // Lê um único dígito
    }

    // Calcular a soma das sequências
    int carry = 0;
    for (int i = n - 1; i >= 0; i--) {
        int soma = seq1[i] + seq2[i] + carry;
        resultado[i + 1] = soma % 10;
        carry = soma / 10;
    }

    // O dígito mais significativo pode exigir um transporte adicional
    resultado[0] = carry;

    // Exibir o resultado como no exemplo dado
    printf("1ª sequência: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", seq1[i]);
    }
    printf("\n");

    printf("2ª sequência: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", seq2[i]);
    }
    printf("\n");

    printf("---------------------------\n");
    printf("Resultado:    ");
    for (int i = (carry == 0) ? 1 : 0; i < n + 1; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
