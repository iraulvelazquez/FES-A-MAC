#include <stdio.h>
int main()
{
  int op, m, nm, dm, c, r, aux;
  float var1, var2, mn, my, sum;
  printf("********** M E N Ú **********\n\n");
  printf("1) Suma de dos variables\n2) Obtener residuo\n3) Determinar el mayor de 10 números\n\n"); 
  do 
  {
    printf("Opción: ");
    scanf("%d", &op); 
    if(op!=1 && op!=2 && op!=3)
      printf("Error, valor inválido\n\n");
  }while(op!=1 && op!=2 && op!=3);
  if(op==1)
  {
    printf("\n********** S U M A  D E  D O S  V A R I A B L E S **********\n\n");
    do 
    {
      printf("Variable 1: ");
      scanf("%f", &var1);
      if(var1<=0)
        printf("Dato inválido, reintentar\n\n");
    }while(var1<=0);
    do 
    {
      printf("Variable 2: ");
      scanf("%f", &var2);
      if(var2<=0)
        printf("Dato inválido, reintentar\n\n");
    }while(var2<=0);
    sum=var1+var2;
    printf("\nSuma: %f\n", sum);
  }
  else 
    if(op==2)
    {
      printf("\n********** O B T E N E R  R E S I D U O **********\n\n");
      do 
      {
        printf("Número 1: ");
        scanf("%d", &nm);
        if(nm<0)
          printf("Dato inválido, reintentar\n\n");
      }while(nm<0);
      do 
      {
        printf("Número 2: ");
        scanf("%d", &dm);
        if(dm<0)
          printf("Dato inválido, reintentar\n\n");
      }while(dm<0);
      if(dm==0)
        printf("\nIndeterminado\n");
      else
      {
        c=nm/dm;
        aux=c*dm;
        r=nm-aux;
        printf("\nResiduo: %d\n", r);
      }
    }
    else 
    {
      printf("\n********** D E T E R M I N A R  E L  M A Y O R  D E  D I E Z  N Ú M E R O S **********\n\n");
      do 
      {
        m=1;
        printf("Número %d: ", m);
        scanf("%f", &my);
        if(my>=0) 
          printf("Error, el dato debe ser negativo\n\n");
      }while(my>=0);
      for(m=2; m<=10; ++m)
      {
        do 
        {
          printf("Número %d: ", m);
          scanf("%f", &mn);
          if(mn>=0)
            printf("Error, el dato debe ser negativo\n\n");
        }while(mn>=0);
        if(mn>my)
          my=mn;
      }
      printf("\nEl mayor es: %f\n", my);
    }
  printf("\nVelázquez Ramírez Carlos Raúl\n\n");
}
