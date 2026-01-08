#include <stdio.h>
#define COL 10000.00
int main()
{
  float prom, ncol, des, prc, tol=0, det=0;
  int a=0, b=0, c=0, d=0, e=0, f=0;
  printf("Colegiatura\n");
  for(a=1; a<=15; ++a)
  {
    printf("\nPromedio %d: ", a);
    scanf("%f", &prom);
    if (prom<0 || prom>10)
    {
      printf("Dato inválido\n");
      ++b;
    }
    else 
      if (prom>9.5 || prom<6.5)
      {
        printf("Sin descuento\n");
        ++c;
      }
      else 
      {
        if (prom<=7.3)
        {
          prc=0.15;
          ++d;
        }
        else 
          if (prom<=8.5)
          {
            prc=0.2;
            ++e;
          }
          else 
          {
            prc=0.5;
            ++f;
          }
        des=prc*COL;
        ncol=COL-des;
        tol+=ncol;
        det+=des;
        printf("Nueva colegiatura: %f\n", ncol);
        printf("Descuento: %f\n", des);
    }
  }
  printf("\nInválidos: %d\n\n", b);
  printf("Sin decuento: %d\n\n", c);
  printf("Con 0.15 de desc.: %d\n\n", d);
  printf("Con 0.2 de desc.: %d\n\n", e);
  printf("Con 0.5 de desc.: %d\n\n", f);
  printf("Total: %f\n\n", tol);
  printf("Descuento total: %f\n\n", det);
  printf("Velázquez Ramírez Carlos Raúl\n\n");
}
