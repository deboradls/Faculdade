#include <stdio.h>

int main() {
    int total_eleitores, votos_branco, votos_nulo, votos_validos;
    float perc_brancos, perc_nulos, perc_validos;

    printf("Qual o número total de eleitores? ");
    scanf("%d", &total_eleitores);

    printf("Qual o número de votos brancos? ");
    scanf("%d", &votos_branco);

    printf("Qual o número de votos nulos? ");
    scanf("%d", &votos_nulo);

    printf("Qual o número de votos válidos? ");
    scanf("%d", &votos_validos);

    perc_brancos = (float)votos_branco / total_eleitores * 100;
    perc_nulos = (float)votos_nulo / total_eleitores * 100;
    perc_validos = (float)votos_validos / total_eleitores * 100;

    printf("O percentual de votos brancos foi %.2f%%\n", perc_brancos);
    printf("O percentual de votos nulos foi %.2f%%\n", perc_nulos);
    printf("O percentual de votos válidos foi %.2f%%\n", perc_validos);

    return 0;
}
