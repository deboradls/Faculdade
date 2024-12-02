#include <stdio.h> 

int main() { 

int numero; 

printf("Escolha um número\n"); 
scanf(" %d", &numero); 
 
FILE *arquivo = fopen("tabuada.txt", "w"); 

if(arquivo == NULL){ 

  printf("Erro para abrir o arquivo"); 

  return 1; 

} 

for(int i = 1; i <= 20; i++){ 

  fprintf(arquivo, "%d x %d = %d\n", numero, i, numero * i); 

} 

fclose(arquivo); 
printf("A tabuada foi calculada e guardada na núvem arquivo tabuada.txt"); 
}