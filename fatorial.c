#include <stdio.h>

void fatorial(int n);

main()
{
  int valor;
  printf("\n\nCalculo de fatorial\n");
  printf("\n\nQual Fatorial");
  scanf("%d", &valor);
  fatorial(valor);

}
void fatorial(int n)
{
  int fat, i;

  fat = 1;
  for(i=1;i<=n; i++){
      fat = fat *i;
  }
  printf("\nFatorial de %d equivale a : %d\n", n, fat);

}
