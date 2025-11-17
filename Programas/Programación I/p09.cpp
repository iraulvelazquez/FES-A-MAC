#include <stdio.h>
#define A 0.13
int main()
{
  float a, b=0, c=0;
  printf("Ventas/Comisiones\n");
  printf("Venta: ");
  scanf("%f", &a);
  if (a<5000 || a>10000)
    printf("Error, no está dentro del rango.\n");
  else 
  {
    b=a*A;
    c=A*100;
    printf("Comisión: %f\n", b);
    printf("Porcentaje: %f\n", c);
  }
  printf("Velázquez Ramírez Carlos Raúl\n");
}

