#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        while (!isalpha(str[inicio]) && inicio < fim) {
            inicio++;
        }

        while (!isalpha(str[fim]) && inicio < fim) {
            fim--;
        }

        if (tolower(str[inicio++]) != tolower(str[fim--])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char palavra[1000];

    printf("Digite uma palavra ou frase: ");
    fgets(palavra, sizeof(palavra), stdin);

    int tamanhoPalavra = strlen(palavra);
    if (palavra[tamanhoPalavra - 1] == '\n') {
        palavra[tamanhoPalavra - 1] = '\0';
    }

    if (ehPalindromo(palavra)) {
        printf("%s é um palíndromo!\n", palavra);
    } else {
        printf("%s não é um palíndromo.\n", palavra);
    }

    return 0;
}
