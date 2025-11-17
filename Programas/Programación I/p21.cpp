#include <stdio.h>
int main()
{
  int a, b=0, c=0; 
  printf("Par, impar o nulo\n\n");
  printf("Número: ");
  scanf("%d", &a);
  if (a==0)
    printf("Nulo\n");
  else 
    if (a>0)
      printf("Positivo\n");
    else 
      printf("Negativo\n");
  ++b;
  printf("Cantidad: %d\n\n", b);
  printf("Número: ");
  scanf("%d", &a);
  if (a==0)
    printf("Nulo\n");
  else 
    if (a>0)
      printf("Positivo\n");
    else 
      printf("Negativo\n");
  ++c;
  printf("Cantidad: %d\n\n", c);
  ++c;
  printf("Total: %d\n\n", c);
  printf("Velázquez Ramírez Carlos Raúl\n");
}
