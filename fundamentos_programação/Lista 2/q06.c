#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int sexo;
    float altura, peso, imc;

    printf("1 - Homem ou 2 - Mulher?\n");
    scanf("%d", &sexo);
    printf("Qual o seu peso (em kg)?\n");
    scanf("%f", &peso);
    printf("Qual a sua altura? (em metros)\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    const char *sexo_str = (sexo == 1) ? "Homem" : (sexo == 2) ? "Mulher" : "Opção inválida";
    
    printf("Você é %s e seu IMC é: %.2f\n", sexo_str, imc);

    const char *condicao = "Desconhecida";

    if (sexo == 1) {
        if (imc <= 19) condicao = "Abaixo do peso";
        else if (imc <= 25.7) condicao = "Peso normal";
        else if (imc <= 27.2) condicao = "Marginalmente acima do peso";
        else if (imc <= 32.3) condicao = "Acima do peso ideal";
        else condicao = "Obeso";
    } else if (sexo == 2) {
        if (imc <= 20.6) condicao = "Abaixo do peso";
        else if (imc <= 26.3) condicao = "Peso normal";
        else if (imc <= 27.7) condicao = "Marginalmente acima do peso";
        else if (imc <= 31.1) condicao = "Acima do peso ideal";
        else condicao = "Obeso";
    }

    printf("Condição: %s\n", condicao);

    return 0;
}
