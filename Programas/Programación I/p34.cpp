#include <stdio.h>
#include <ctype.h>
int main()
{
  char op;
  int n, x, d, m, a;
  float s, st=0;
  printf("******** M E N Ú ********\n\n");
  printf("s) Promedio de n sueldos.\nF) Fecha de nacimiento.\nx) Nombre. \n\n"); 
  do 
  {
    printf("Opción: "); 
    scanf(" %c", &op); 
    op=tolower(op);
    if(op!='s' && op!='f' && op!='x') 
      printf("Letra inválida, favor de repetir.\n");
  }while(op!='s' && op!='f' && op!='x');
  switch(op) 
  {
    case 's': 
      printf("\n******** P R O M E D I O  D E  N  S U E L D O S ********\n\n");
      do 
      {
        printf("Cantidad de sueldos: "); 
        scanf("%d", &n);
        if(n<2) 
          printf("Dato inválido, se requiere un entero positivo.\n");
      }while(n<2);
      for(x=1; x<=n; ++x)
      {
        do 
        {
          printf("\nSueldo %d: ", x);
          scanf("%f", &s);
          if(s<0) 
            printf("Dato inválido, se requiere un número positivo.\n");
          else 
            st+=s;
        }while(s<0);
      }
      printf("\nPromedio total: %f.\n\n", st/n);
    break;
    case 'f': 
      printf("\n******** F E C H A  D E  N A C I M I E N T O ********\n\n"); 
      do 
      {
        printf("\nDía: "); 
        scanf("%d", &d); 
        if(d<1 || d>31)
          printf("Dato inválido.\n");
      }while(d<1 || d>31);
      do 
      {
        printf("\nMes: "); 
        scanf("%d", &m); 
        if(m<1 || m>12)
          printf("Dato inválido.\n");
      }while(m<1 || m>12);
      do 
      {
        printf("\nAño: "); 
        scanf("%d", &a); 
        if(a<1925 || a>2025)
          printf("Dato inválido.\n");
      }while(a<1925 || a>2025);
      printf("\nFecha: %d/%d/%d.\n\n", d, m, a);
    break;
    case 'x': 
      printf("\nVelázquez Ramírez Carlos Raúl.\n\n");
    break;
  }
}
