#include <stdio.h>

void encaixa(int n1, int n2); // funcao recebe dois inteiros positivos

int main() {
  int A, B;
  scanf("%d\n",&A);
  while(A<1000 || A > 9999 ){  //tratamento limite de digitos 4
    printf("O valor nao possui 4 digitos\n");
    scanf("%d\n", &A);
  }

    scanf("%d\n",  &B);
  while (B<10 || B > 99){
    printf("O valor nao possui 2 digitos\n");
    scanf("%d\n", &B);
  }
  encaixa(A,B);
}

void encaixa(int n1, int n2){
    if (n1%100 == n2){
      printf("Encaixa\n");

    }else{
        printf("Nao encaixa\n");
  }
}
