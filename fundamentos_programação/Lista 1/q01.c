#include <stdio.h>

int main(void){
    int a, b, c;
    a = 10;
    b = 20;

    c = a;
    a = b;
    b = c;

    printf("O valor de a é %d e o valor de b é %d", a, b);

    return 0;
}