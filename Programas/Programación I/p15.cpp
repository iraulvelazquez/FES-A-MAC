#include <stdio.h>
#define COL 10000.00
int main()
{
  float prom, ncol, des, prc; 
  printf("Colegiatura\n");
  printf("Promedio: ");
  scanf("%f", &prom);
  if (prom<0 || prom>10)
    printf("Dato inválido\n");
  else 
    if (prom>9.5 || prom<6.5)
      printf("Sin descuento\n");
    else 
    {
      if (prom<=7.3)
        prc=0.15;
      else 
        if (prom<=8.5)
          prc=0.2;
        else 
          prc=0.5;
      des=prc*COL;
      ncol=COL-des;
      printf("Nueva Colegiatura: %f\n", ncol);
      printf("Descuento: %f\n", des);
    }
  printf("Velázquez Ramírez Carlos Raúl\n");
}
