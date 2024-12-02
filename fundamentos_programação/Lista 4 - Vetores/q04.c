#include <stdio.h>

int main() {
    char gabarito[10];
    
    printf("Digite o gabarito da prova podendo ser letras e/ou números): ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &gabarito[i]);
    }

    for (int aluno = 1; aluno <= 50; aluno++) {
        char respostas[10];
        int acertos = 0;

        printf("\nDigite as respostas do aluno %d podendo ser letras e/ou números): ", aluno);
        for (int i = 0; i < 10; i++) {
            scanf(" %c", &respostas[i]);

            if (respostas[i] == gabarito[i]) {
                acertos++;
            }
        }

        printf("Aluno %d - Número de acertos: %d - ", aluno, acertos);
        if (acertos >= 6) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }

    return 0;
}
