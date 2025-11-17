#include <stdio.h>
int main()
{
  float prom, tot, cal1, cal2, calp, promg;
  int x, n;
  printf("Promedio de calificación\n");
  for(x=1; x<=10; ++x)
  {
    calp=0;
    n=1;
    do 
    {
      printf("Calificación %d: ", n);
      scanf("%f", &cal1);
      if(cal1<0 || cal1>10)
        printf("Dato inválido, vuelva a reintentar\n");
    }while(cal1<0 || cal1>10);
    ++n;
    calp+=cal1;
    do 
    {
      printf("Calificación %d: ", n);
      scanf("%f", &cal2);
      if(cal2<0 || cal2>10)
        printf("Dato inválido, vuelva a reintentar\n");
    }while(cal2<0 || cal2>10);
    calp+=cal2;
    prom=calp/n; 
    tot+=prom;
    printf("Promedio alumno %d: %f\n", x, prom);
    if(prom>=6)
      printf("Aprobado\n\n");
    else 
      printf("Reprobado\n\b");
  }
  promg=tot/x; 
  printf("Promedio global: %f\n\n", promg);
  printf("Velázquez Ramírez Carlos Raúl\n");
}
