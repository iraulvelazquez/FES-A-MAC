#include <stdio.h>
#define T 10
int main()
{
  int alm[T], a[T], r[T], sum[T], cal1, cal2, A=0, R=0, x, calt, b, z=0;
  printf("*** P R O M E D I O S   Y   A R R E G L O S\n\n"); 
  for(x=0; x<T; ++x)
  {
    do 
    {
      printf("Calificación %d y %d: ", z+1, z+2);
      scanf("%d %d", &cal1, &cal2); 
      calt=cal1+cal2; 
      alm[x]=calt/2;
      if(calt<0 || calt>10) 
        printf("Calificaciones inválidas\n\n");
    }while(calt<0 || calt>10);
    z+=2;
    printf("Promedio: %d\n\n", alm[x]);
  }
  for(x=0; x<T; ++x)
  {
    if(alm[x]>=6)
    {
      a[A]=alm[x];
      ++A;
    }
    else 
    {
      r[R]=alm[x];
      ++R;
    }
  }
  if(A>R)
    b=R;
  else 
    b=A;
  for(x=0; x<b; ++x)
  {
    sum[x]=a[x]+r[x];
  }
  printf("Promedios\n\n");
  for(x=0; x<T; ++x)
  {
    printf("Promedio %d: %d\n", x+1, alm[x]);
  }
  printf("Aprobados\n\n"); 
  for(x=0; x<A; ++x)
  {
    printf("Aprobado %d: %d\n", x+1, a[x]);
  }
  printf("Reprobados\n\n"); 
  for(x=0; x<R; ++x)
  {
    printf("Reprobado %d: %d\n", x+1, r[x]);
  }
  printf("Sumas\n\n"); 
  for(x=0; x<b; ++x)
  {
    printf("Suma %d: %d\n", x+1, sum[x]);
  }
  printf("\nVelázquez Ramírez Carlos Raúl\n\n");
}
