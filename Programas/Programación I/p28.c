#include <stdio.h>
int main()
{
  int n, x, r=1; 
  printf("Número: ");
  scanf("%d", &n);
  if(n<0)
    printf("Error en dato\n");
  else 
    if(n!=0 && n!=1)
    {
      for(x=1; x<=n; ++x)
      {
        r*=x;
        printf("%d x %d = %d\n", x-1, x, r);
      }
      printf("El factorial de %d es %d\n", n, r);
    }
    else 
      if(n==0)
        printf("Factorial de 0 es: 1\n");
      else 
        printf("Factorial de 1 es: 1\n");
}
