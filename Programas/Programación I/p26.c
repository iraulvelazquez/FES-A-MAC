#include <stdio.h>
int main()
{
  int x1, x2, n, x3, x4, x5, i=0;
  float sd, tsd;
  printf("Un millón de A's\n");
  for(x1=1; x1<=100; ++x1)
  {
    printf("a");
  }
  printf("\n\nSueldos\n");
  printf("Núm. sueldos: ");
  scanf("%d", &n);
  if(n>0)
  {
    for(x2=1; x2<=n; ++x2)
    {
      printf("Sueldo %d: ", x2);
      scanf("%f", &sd);
      if(sd>0)
        tsd+=sd;
      else
       ++i;
    }
    printf("Total: %f\n", tsd);
    printf("Inválidos: %d\n", i);
  }
  printf("\nSuma 100\n");
  for(x3=100; x3<=600; x3+=100)
  {
    printf("%d ", x3);
  }
  printf("\nResta 3\n");
  for(x4=15; x4>=0; x4-=3)
  {
    printf("%d ", x4);
  }
  printf("\nDivide 2\n");
  for(x5=96; x5>=3; x5/=2)
  {
    printf("%d ", x5);
  }
}

