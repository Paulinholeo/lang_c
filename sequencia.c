#include "stdio.h"

float sequencia(int n, int a);

int main(){
      int n, a;
      printf("Digite a quantidade de elementos: \t" );
      scanf("%d", &n );
      printf("Digite o valor de A: \t" );
      scanf("%d", &a );
      printf("O valor de soma %.2f\n", sequencia(n, a));
      return 0;
}

float sequencia(int n, int a){
    float soma = 0;
    for (int i=1; i <= n; i++){
    soma = soma + (1/(i*a*1.0));
  }
    return(soma);
}
