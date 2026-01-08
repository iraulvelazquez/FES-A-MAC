#include <stdio.h>
int main()
{
  int a, b, c, d, aux;
  printf("Residuo de dos números\n");
  printf("Número 1: ");
  scanf("%d", &a);
  printf("Número 2: ");
  scanf("%d", &b);
  if (a>=0 && b>0)
  {
    c=a/b;
    aux=c*b;
    d=a-aux;
    printf("Residuo: %d\n", d);
  }
  else 
    if (b==0)
      printf("Indefinido\n");
    else 
      if (a<0)
        printf("El primer número es negativo\n");
      else 
        printf("El segundo número es negativo\n");
  printf("Velázquez Ramírez Carlos Raúl\n");
}
