#include <stdio.h>

int main (void){ 
  float horas_trabalhadas, salario_minimo, horas_extras, salario_bruto, salario_horas_extras, salario_total;

  printf("Qual a quantidade de horas trabalhadas? ");
  scanf("%f", &horas_trabalhadas);

  printf("Qual o valor do salário mínimo? ");
  scanf("%f", &salario_minimo);

  printf("Qual a quantidade de horas extras trabalhadas? ");
  scanf("%f", &horas_extras);

  salario_bruto = horas_trabalhadas * (salario_minimo / 100.00);
  salario_horas_extras = horas_extras * (1.4 * salario_minimo / 100);
  salario_total = salario_bruto + salario_horas_extras;
  
  printf("O salário a receber é de R$ %.2f\n", salario_total);
}