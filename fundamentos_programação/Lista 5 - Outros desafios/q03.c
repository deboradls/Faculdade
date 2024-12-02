#include <stdio.h> 

int main(){ 

int n; 

printf("Define a quantidade de elementos da sequência\n"); 
scanf("%d",&n); 

int sequência[n]; 
printf("Digite os números de cada elemento\n"); 
  for(int i = 0; i < n; i++){ 
    scanf(" %d",&sequência[i]); 
  } 

int Spares = 0; 

for(int i = 0; i < n; i++){ 

if(sequência[i] % 2 == 0){ 
   Spares += sequência[i]; 
    }
} 

printf("A soma dos números pares da sequência de elementos são: %d\n", Spares); 
  return 0;
}