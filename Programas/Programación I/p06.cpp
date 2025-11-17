#include <stdio.h>
int main()
{
  float a=0, b=0, c=0, d=0, aux=0;
  printf("Figura geométrica, triángulo\n");
  printf("Lado: ");
  scanf("%f", &a);
  printf("Altura: ");
  scanf("%f", &b);
  if (a<=0 || b<=0)
    printf("Valores inválidos\n");
  else
  {
    c=a*3;
    aux=a*b;
    d=aux/2;
    printf("El perímetro es: %f\n", c);
    printf("El área es: %f\n", d);
  }
  printf("Velázquez Ramíerez Carlos Raúl\n");
}
