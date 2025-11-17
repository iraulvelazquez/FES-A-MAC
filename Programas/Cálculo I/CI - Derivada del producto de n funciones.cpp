#include <stdio.h>
int main()
{
  int n, x, y, a=0;
  printf("Derivada del producto de n funciones\n\n");
  do 
  {
    printf("n: ");
    scanf("%d", &n);
    if(n<2) 
      printf("n debe ser mayor o igual a 2\n\n");
  }while(n<2);
  putchar('\n');
  for(y=n; y>=1; --y)
  {
    while(x==n)
    {
      printf(" + \n");
      ++x;
    }
    for(x=1; x<y; ++x)
    {
      ++a;
      printf("f(%d)", a);
    }
    ++a;
    printf("f(%d)'", a);
    for(x=y; x<n; ++x)
    {
      ++a;
      printf("f(%d)", a);
    }
    x=n;
    a=0;
  }
  printf("\n\n");
}
