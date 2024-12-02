#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float salario;
    
    printf("Qual o seu salário? ");
    scanf("%f", &salario);
    
    float inss;
    
    if (salario <= 600) {
        inss = salario;
        printf("Você é isento do desconto INSS\n.");
        return 0; //No caso do isento não exibe o ultimo printf
    } else if (salario <= 1200) {
        inss = salario * 0.20;
    } else if (salario <= 2000) {
        inss = salario * 0.25;
    } else {
        inss = salario * 0.30;
    }
    
    printf("O seu salário após o desconto do INSS é: %.2f\n", inss);
    
    return 0;
}