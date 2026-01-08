#include <stdio.h> 
int main() 
{ 
  int gpo, alu, x, y, talu=0, g=1151; 
  float tprom=0, tcal=0, pprom, cal;
  printf("*** PROMEDIOS ***\n\n"); 
  do 
  {
    printf("Grupos: "); 
    scanf("%d", &gpo);
    if(gpo<=0) 
      printf("Inválido\n\n");
  }while(gpo<=0);
  for(x=1; x<=gpo; ++x) 
  {
    printf("\nGrupo %d\n\n", g);
    ++g;
    do 
    {
      printf("Calificaciones: "); 
      scanf("%d", &alu); 
      if(alu<=0) 
        printf("Inválido\n\n");
    }while(alu<=0);
    putchar('\n');
    for(y=1; y<=alu; ++y) 
    {
      do 
      {
        printf("Calificación %d: ", y); 
        scanf("%f", &cal);
        if(cal<0 || cal>10) 
          printf("Inválido\n\n");
      }while(cal<0 || cal>10);
      tcal+=cal;
    }
    tprom+=tcal;
    tcal/=alu;
    printf("\nPromedio grupo %d: %.1f\n", x, tcal);
    talu+=alu;
    tcal=0;
  }
  pprom=tprom/talu; 
  printf("\nPromedio de promedios: %.1f\n\n", pprom);
  printf("Velázquez Ramírez Carlos Raúl\n\n");
}
