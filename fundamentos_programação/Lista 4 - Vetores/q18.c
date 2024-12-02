#include <stdio.h>
#include <string.h>

int contarPalavras(const char *frase) {
    int numeroPalavras = 0;
    int tamanhoFrase = strlen(frase);

    // Variável para indicar se estamos dentro de uma palavra
    int dentroDaPalavra = 0;

    // Iterar pela frase para contar as palavras
    for (int i = 0; i < tamanhoFrase; i++) {
        if (frase[i] == ' ' || frase[i] == '\t' || frase[i] == '\n') {
            // Se encontrou um espaço, tabulação ou nova linha, marcar que estamos fora de uma palavra
            dentroDaPalavra = 0;
        } else {
            // Se encontrou um caractere não branco, e não está dentro de uma palavra, incrementar o número de palavras
            if (!dentroDaPalavra) {
                dentroDaPalavra = 1;
                numeroPalavras++;
            }
        }
    }

    return numeroPalavras;
}

int main() {
    char frase[1000]; // Aumentei o tamanho para lidar com frases maiores

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remover o caractere de nova linha (se presente) no final da frase
    int tamanhoFrase = strlen(frase);
    if (frase[tamanhoFrase - 1] == '\n') {
        frase[tamanhoFrase - 1] = '\0';
    }

    int numeroPalavras = contarPalavras(frase);

    printf("A frase tem %d palavra(s).\n", numeroPalavras);

    return 0;
}
