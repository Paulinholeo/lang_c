#include <stdio.h>
#include <stdlib.h>


int main (){
  
  char frase[100];
  int i =0;
  
  printf("Digite uma frase: \n\n");
  gets(frase);
  
  while(frase[i] != '\0'){
    
    printf("O valor de cada caractere: %c \n", frase[i]);
    i = i +1;        
  }
   printf("A quantidade de caractere: %d: \n\n", i);  
    
  return 0;
}