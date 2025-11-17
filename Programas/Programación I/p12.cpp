#include <stdio.h>
int main() 
{
  float cal1, cal2;
  printf("Calificaciones\n");
  printf("Calificación 1:");
  scanf("%f",&cal1);
  printf("Calificación 2:");
  scanf("%f",&cal2);
  if (cal1<=10 && cal1>=0 && cal2<=10 && cal2>=0)
    printf("Ambas calificaciones son válidas\n");
  else 
    if (cal1<0 || cal1>10) 
      if (cal2<0 || cal2>10) 
        printf("Ambas calificaciones son inválidas\n");
      else 
        printf("La calificación 1 es inválida\n");
    else 
      printf("La calificación 2 es inválida\n");
  printf("Velázquez Ramírez Carlos Raúl\n");
}
