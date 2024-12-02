#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    int A, B, C;

    printf ("Qual o valor de A?");
    scanf("%d", &A);
    printf("Qual o valor de B?");
    scanf("%d", &B);

    C = (A == B) ? (A + B) : (A * B);

    printf("O resultado é %d\n", C);

    return 0;
}