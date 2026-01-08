#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Característica\n");
  printf("Número: ");
  scanf("%d", &a);
  if (a==0)
    printf("Nulo\n");
  else 
    if (a<0)
      printf("Negativo\n");
    else 
    {
      b=a%2;
      if (b==1)
        printf("Impar\n");
      else 
        printf("Par\n");
    }
  printf("Velázquez Ramírez Carlos Raúl\n");
}
