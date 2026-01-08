#include <stdio.h>
#define B 1000
int main()
{
  int a, b, c;
  printf("Anotaciones\n");
  printf("Puntaje: ");
  scanf("%d", &a);
  if(a<0)
    printf("ERROR EN EL DATO\n");
  else 
    if(a<10)
      printf("No le corresponde bonos\n");
    else 
    {
      if(a<=20)
        b=2;
      else 
        if(a<=30)
          b=4;
        else 
          b=10;
      c=b*B;
      printf("Importe: %d\n", c);
    }
  printf("Velázquez Ramírez Carlos Raúl\n");
}
