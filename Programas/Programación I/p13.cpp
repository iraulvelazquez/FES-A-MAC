#include <stdio.h>
int main() 
{
  float n; 
  printf("Edades y escolaridad\n");
  printf("Edad: ");
  scanf("%f",&n);
  if(n>=6 && n<=12)
    printf("Primaria\n");
  else 
    if(n>12 && n<=15) 
      printf("Secundaria\n");
    else 
      if(n>15 && n<=20)
        printf("Preparatoria\n");
      else 
        printf("Edad fuera de los rangos\n");
  printf("Velázquez Ramírez Carlos Raúl\n");
}
