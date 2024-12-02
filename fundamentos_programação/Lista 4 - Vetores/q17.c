#include <stdio.h>
#include <ctype.h>

void converterParaMaiuscula(char *str) {
    int tamanho = strlen(str);

    // Converter a primeira letra da string para maiúscula
    str[0] = toupper(str[0]);

    // Iterar pela string para converter a primeira letra de cada palavra
    for (int i = 1; i < tamanho; i++) {
        // Se o caractere anterior é um espaço, tabulação ou nova linha, converter o caractere atual para maiúscula
        if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n') {
            str[i] = toupper(str[i]);
        }
    }
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

    converterParaMaiuscula(frase);

    printf("Frase com a primeira letra de cada palavra em maiúscula: %s\n", frase);

    return 0;
}
