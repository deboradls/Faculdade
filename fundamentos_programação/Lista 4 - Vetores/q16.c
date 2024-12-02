#include <stdio.h>
#include <string.h>

void removerEspacosRepetidos(char *str) {
    int i, j;
    int tamanho = strlen(str);

    // Variável para indicar se o caractere anterior foi um espaço
    int espacoAnterior = 0;

    // Iterar pela string
    for (i = 0, j = 0; i < tamanho; i++) {
        if (str[i] == ' ') {
            // Se o caractere atual for um espaço
            if (!espacoAnterior) {
                // Se o caractere anterior não foi um espaço, copiar o espaço para a nova string
                str[j++] = str[i];
                espacoAnterior = 1; // Indicar que o caractere atual é um espaço
            }
            // Se o caractere atual e o anterior são espaços, ignorar o caractere atual
        } else {
            // Se o caractere atual não é um espaço, copiar para a nova string
            str[j++] = str[i];
            espacoAnterior = 0; // Indicar que o caractere atual não é um espaço
        }
    }

    // Adicionar o caractere nulo ao final da nova string
    str[j] = '\0';
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

    removerEspacosRepetidos(frase);

    printf("Frase sem espaços em branco repetidos: %s\n", frase);

    return 0;
}
