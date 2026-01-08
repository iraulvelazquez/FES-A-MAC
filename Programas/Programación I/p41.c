#include <stdio.h>
int main()
{
  int prcs, ctos, x, y, num, neg=0, pos=0, cr=0, may, tneg=0, tpos=0, tcr=0, anmay;
  printf("*** NEGATIVOS, POSITIVOS, CEROS, MAYORES Y PROCESOS ***\n\n");
  do 
  {
    printf("Procesos: ");
    scanf("%d", &prcs);
    if(prcs<=0)
      printf("Inválido\n\n");
  }while(prcs<=0);
  for(x=1; x<=prcs; ++x)
  {
    do 
    {
      printf("Cuantos: ");
      scanf("%d", &ctos);
      if(ctos<=0) 
        printf("Inválido\n\n");
    }while(ctos<=0);
    printf("\nNúmero 1: ");
    scanf("%d", &num);
    if(num<0)
      ++neg; 
    if(num>0) 
      ++pos; 
    if(num==0) 
      ++cr;
    may=num;
    for(y=1; y<=ctos-1; ++y)
    {
      printf("Número %d: ", y+1);
      scanf("%d", &num);
      if(num>may)
        may=num;
      if(num<0)
        ++neg; 
      if(num>0) 
        ++pos; 
      if(num==0) 
        ++cr;
    }
    if(x>1 && may>anmay) 
      anmay=may;
    printf("\nMayor: %d\n", may);
    printf("Negativos: %d\n", neg);
    printf("Positivos: %d\n", pos); 
    printf("Ceros: %d\n\n", cr); 
    tneg+=neg; 
    tpos+=pos; 
    tcr+=cr; 
    neg=0; 
    pos=0; 
    cr=0;
    if(x==1)
      anmay=may;
  }
  printf("Negativos totales: %d\n", tneg);
  printf("Positivos totales: %d\n", tpos);
  printf("Ceros totales: %d\n", tcr);
  printf("Mayor de todos: %d\n\n", anmay);
  printf("Velázquez Ramírez Carlos Raúl\n\n");
}
