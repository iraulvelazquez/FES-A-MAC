#include <stdio.h>
int main()
{
  float a=0, b=0, c=0, aux=0;
  printf("Promedio de calificación\n");
  printf("Calificación 1: ");
  scanf("%f", &a);
  printf("Calificación 2: ");
  scanf("%f", &b);
  if (a>10 || a<0 || b>10 || b<0)
    printf("Una o ambas calificaciones son inválidas\n");
  else 
  {
    aux=a+b;
    c=aux/2;
    printf("Tu promedio es: %f\n", c);
  }
  printf("Velázquez Ramírez Carlos Raúl\n");
}
