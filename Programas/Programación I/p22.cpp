#include <stdio.h>
int main()
{
  float b=0, c=0;
  int a=0, d=0;
  for(a=1; a<=10; ++a)
  {
    printf("Sueldo: ");
    scanf("%f", &b);
    if(b>0)
    {
      c+=b;
      ++d;
    }
  }
  printf("Total: %f\n", c);
  printf("Válidos: %d\n", d);
  printf("Velázquez Ramírez Carlos Raúl\n");
}
