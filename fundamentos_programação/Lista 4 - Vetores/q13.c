#include <stdio.h>

int main() {
    int n;

    // Solicitar ao usuário o número de elementos na sequência
    printf("Digite o número de elementos na sequência: ");
    scanf("%d", &n);

    // Verificar se o número de elementos é válido
    if (n <= 0) {
        printf("O número de elementos deve ser maior que zero.\n");
        return 1;  // Encerrar o programa com código de erro
    }

    // Declarar um array para armazenar a sequência
    double sequencia[n];

    // Solicitar ao usuário a sequência de números
    printf("Digite a sequência de números reais:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &sequencia[i]);
    }

    // Verificar a ocorrência de cada número na sequência
    for (int i = 0; i < n; i++) {
        // Verificar apenas se o número não foi processado antes
        if (sequencia[i] != 0) {
            int ocorrencias = 1;  // Contador de ocorrências do número atual

            // Comparar com os números restantes na sequência
            for (int j = i + 1; j < n; j++) {
                if (sequencia[j] == sequencia[i]) {
                    ocorrencias++;
                    sequencia[j] = 0;  // Marcar o número como processado
                }
            }

            // Imprimir o resultado para o número atual
            printf("%.1lf ocorre %d vez(es)\n", sequencia[i], ocorrencias);
        }
    }

    return 0;
}
