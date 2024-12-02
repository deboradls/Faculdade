#include <stdio.h> 

#include <stdbool.h> 

  

int primo(int numero){ 

  if (numero <= 1) {  
       printf("O número não é primo\n"); 

        return false;  
    }  

    for (int i = 2; i * i <= numero; i++) {  
        if (numero % i == 0) {  
            printf("O número não é primo\n"); 

            return false;  
        } 
    }  

    printf("O número é primo\n");     

    return true; 
}  

int main() {  

int numero; 

printf("Digite um número\n"); 
  scanf(" %d", &numero); 
primo(numero); 

}