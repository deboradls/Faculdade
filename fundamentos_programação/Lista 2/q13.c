#include <stdio.h>

int main(void) {
    int idade;

    printf("Qual a idade da criança? ");
    scanf("%d", &idade);

    if (idade >= 4 && idade <= 5) {
        printf("A criança irá ter aulas na turma A.\n");
    } else if (idade >= 6 && idade <= 8) {
        printf("A criança irá ter aulas na turma B.\n");
    } else if (idade >= 9 && idade <= 10) {
        printf("A criança irá ter aulas na turma C.\n");
    } else {
        printf("Não possui turmas para a idade desta criança.\n");
    }

    return 0;
}
