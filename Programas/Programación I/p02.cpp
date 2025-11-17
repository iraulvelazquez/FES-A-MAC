#include <stdio.h>
int main()
{
  int a=0, b=0, c=0;
  printf("Intercambio de dos variables \n");
  scanf("%d %d", &a, &b);
  c=a;
  a=b;
  b=c;
  printf("Tu nuevas variables son \n%d \n%d \n", a, b);
}
