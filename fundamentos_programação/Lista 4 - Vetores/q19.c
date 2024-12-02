#include <stdio.h>
#include <string.h>

int contarOcorrencias(const char *frase, const char *palavra) {
    int ocorrencias = 0;
    int tamanhoFrase = strlen(frase);
    int tamanhoPalavra = strlen(palavra);

    for (int i = 0; i <= tamanhoFrase - tamanhoPalavra; i++) {
        if (strncmp(&frase[i], palavra, tamanhoPalavra) == 0) {
            ocorrencias++;
        }
    }

    return ocorrencias;
}

int main() {
    char frase[1000]; 
    char palavra[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int tamanhoFrase = strlen(frase);
    if (frase[tamanhoFrase - 1] == '\n') {
        frase[tamanhoFrase - 1] = '\0';
    }

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int ocorrencias = contarOcorrencias(frase, palavra);

    printf("Temos que a palavra ocorre %d vezes na frase.\n", ocorrencias);

    return 0;
}
