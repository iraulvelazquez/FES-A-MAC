#include <stdio.h>
int main()
{
  int a, b=0, c=0, d=0, x;
  printf("Par, impar o nulo\n\n");
  for(x=1; x<=10; ++x)
  {
    printf("Número: ");
    scanf("%d", &a);
    if (a==0)
    {
      printf("Nulo\n\n");
      ++b;
    }
    else 
      if (a>0)
      {
        printf("Positivo\n\n");
        ++c;
      }
      else 
      {
        printf("Negativo\n\n");
        ++d;
      }
  }
  printf("Positivos: %d\n", c);
  printf("Negativos: %d\n", d);
  printf("Nulos: %d\n\n", b);
  printf("Velázquez Ramírez Carlos Raúl\n");
}
