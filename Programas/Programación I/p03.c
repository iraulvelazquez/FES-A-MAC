#include <stdio.h>
int main()
{
  int a=0, b=0, c=0, d=0, aux=0;
  printf("Obtener el residuo de una división \n");
  scanf("%d \n %d", &a, &b);
  c=a/b;
  aux=c*b;
  d=a-aux;
  printf("Residuo=%d \n", d);
}
