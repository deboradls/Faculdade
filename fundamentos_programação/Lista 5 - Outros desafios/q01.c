 #include <stdio.h>  

int potência(int nºA, int nºB){ 
int resultado = 1;//armazenar o valor da potência    
  for(int i = 0; i < nºB; i++){ 
    resultado = resultado * nºA; 
  } 
  return resultado; 
}

int main() { 
int númeroA, númeroB; 
int resultado2; 

printf("Digite o numero A e Número B:\n"); 
scanf(" %d %d",&númeroA,&númeroB); 

resultado2 = potência(númeroA, númeroB); 
    printf("Resultado: %d\n", resultado2); 

return resultado2; 

}