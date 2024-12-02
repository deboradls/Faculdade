#include <stdio.h>
#include <string.h>

int main() {
    char frase[101]; // Array para armazenar a frase, com espaço para o caractere nulo no final
    char palavraMaisLonga[101]; // Array para armazenar a palavra mais longa
    int comprimentoMaximo = 0; // Variável para armazenar o comprimento máximo da palavra
    int comprimentoAtual = 0; // Variável para armazenar o comprimento da palavra atual

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remover o caractere de nova linha (se presente) no final da frase
    int tamanhoFrase = strlen(frase);
    if (frase[tamanhoFrase - 1] == '\n') {
        frase[tamanhoFrase - 1] = '\0';
    }

    // Iterar pela frase para encontrar a palavra mais longa
    for (int i = 0; i <= tamanhoFrase; i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
            // Se encontrou um espaço em branco ou o final da frase
            // Verificar se a palavra atual é a mais longa até agora
            if (comprimentoAtual > comprimentoMaximo) {
                comprimentoMaximo = comprimentoAtual;
                strncpy(palavraMaisLonga, &frase[i - comprimentoAtual], comprimentoAtual);
                palavraMaisLonga[comprimentoAtual] = '\0';
            }
            // Reiniciar o comprimento da palavra atual
            comprimentoAtual = 0;
        } else {
            // Incrementar o comprimento da palavra atual
            comprimentoAtual++;
        }
    }

    // Imprimir a palavra mais longa encontrada
    printf("A primeira palavra mais longa na frase é: %s\n", palavraMaisLonga);

    return 0;
}
