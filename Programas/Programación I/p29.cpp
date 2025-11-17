#include <stdio.h>
int main()
{
  int n, m, x;
  printf("Tabla: ");
  scanf("%d", &n);
  printf("hasta: ");
  scanf("%d", &m);
  if(n>2 || m>2)
    if(n<2)
      printf("Error en tabla\n");
    else 
      if(m<2)
        printf("Error en hasta\n");
      else 
      {
        for(x=1; x<=m; ++x)
        {
          printf("%d x %d = %d\n", n, x, n*x);
        }
      }
  else 
    printf("Error en tabla\nError en hasta\n");
}
