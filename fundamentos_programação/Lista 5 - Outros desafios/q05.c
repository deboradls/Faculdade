#include <stdio.h> 

#include <stdbool.h> 

int primo(int numero){ 
  if (numero <= 1) {  

  return false;  
  }  

    for (int i = 2; i * i <= numero; i++) {  
        if (numero % i == 0) {  
    
    return false;  
    }  
  }  
return true;  
}  

int main() {  
int numero1, numero2, soma = 0;  

printf("Digite dois números para formar um intervalo\n"); 
scanf(" %d %d", &numero1, &numero2); 
    
    for(int i = numero1; i<= numero2; i++){ 
    if(primo(i)){ 
      soma += i; 
    } 
  } 

printf("A soma dos números primos no intervalo dado é: %d\n ", soma); 

}