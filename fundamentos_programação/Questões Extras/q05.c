#include <stdio.h>

int main(void){
    int numero;

    printf("Qual número você quer saber a tabuada de soma?\n");
    scanf("%d", &numero);

    printf("A tabuada do número %d é:\n");
    for (int i = 0; i <= 10; i++){
        printf("%d + %d = %d\n", numero, i, numero + i);
    }
    
    return 0;
}