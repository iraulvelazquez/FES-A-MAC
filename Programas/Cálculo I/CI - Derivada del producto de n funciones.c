#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
  int n, x, y, a=0, elm;
  float exp[100], cof[100], dexp[100], dcof[100];
  char op;
  printf("Integrantes:\nGarcía Córdova Ernesto Leonel\nVelázquez Ramírez Carlos Raul");
  printf("\n\n*** D E R I V A D A S ***");
  while(op!='c') 
  {
    printf("\n\n*****    M E N Ú    *****\n\n");
    printf("a) Derivada de un polinomio.\nb) Regla de la cadena.\nc) Cerrar el programa.\nd) ASCII.\n\n");
    do 
    {
      printf("Selección: "); 
      scanf(" %c", &op);
      op=tolower(op);
      if(op!='a' && op!='b' && op!='c' && op!='d') 
        printf("Valor inválido, favor de repetir.\n\n");
    }while(op!='a' && op!='b' && op!='c' && op!='d');
    switch (op) 
    {
      case 'a': 
        printf("\n*** D E R I V A D A   D E   U N   P O L I N O M I O ***\n\n");
        do 
        {
          printf("Elementos: ");
          scanf("%d", &elm);
          if(elm<=0)
            printf("¡No puedes derivar una función de 0 elementos!.\n\n");
        }while(elm<=0);
        putchar('\n');
        for(x=0; x<elm; ++x)
        {
          printf("Coeficiente de la variable x_%d: ", x+1);
          scanf("%f", &cof[x]);
          if(cof[x]!=0)
          {
            printf("Exponente de la variable x_%d: ", x+1);
            scanf("%f", &exp[x]);
          }
          putchar('\n');
        }
        printf("Polinomio: ");
        for(x=0; x<elm; ++x)
        {
          if(cof[x]!=0)
          {
            y=1;
            if(cof[x-1]==0)
              y=0;
            if(cof[x]>0 && x!=0 && y==1)
              putchar('+');
            if(cof[x]<0 && cof[x]!=-1)
              putchar('-');
            if(exp[x]!=0)
              if(exp[x]==1)
                if(cof[x]==1)
                  printf(" x ");
                else
                  if(cof[x]==-1)
                    printf("- x ");
                  else 
                    printf( "%.2fx ", fabs(cof[x]));
              else 
                if(cof[x]==1)
                  printf(" x^%.2f ", exp[x]);
                else 
                  if(cof[x]==-1)
                    printf("- x^%.2f ", exp[x]);
                  else
                    printf(" %.2fx^%.2f ", fabs(cof[x]), exp[x]);
            else
              if(cof[x]==-1)
                printf("- %.2f ", fabs(cof[x]));
              else
                printf(" %.2f ", fabs(cof[x]));
          }
        }
        for(x=0; x<elm; ++x)
        {
          dcof[x]=cof[x]*exp[x];
          if(exp[x]!=0)
            dexp[x]=exp[x]-1;
          else 
            dexp[x]=exp[x];
        }
        printf("\n\nDerivada: ");
        for(x=0; x<elm; ++x)
        {
          if(dcof[x]!=0)
          {
            y=1;
            if(dcof[x-1]==0)
              y=0;
            if(dcof[x]>0 && x!=0 && y==1) 
              putchar('+');
            if(dcof[x]<0 && dcof[x]!=-1)
              putchar('-');
            if(dexp[x]!=0)
              if(dexp[x]==1)
                if(dcof[x]==1)
                  printf("x");
                else
                  if(dcof[x]==-1)
                    printf("- x ");
                  else 
                    printf(" %.2fx ", fabs(dcof[x]));
              else 
                if(dcof[x]==1)
                  printf(" x^%.2f ", dexp[x]);
                else 
                  if(dcof[x]==-1)
                    printf("- x^%.2f ", dexp[x]);
                  else
                    printf(" %.2fx^%.2f ", fabs(dcof[x]), dexp[x]);
            else
              if(dcof[x]==-1)
                printf("- %.2f ", fabs(dcof[x]));
              else
                printf(" %.2f ", fabs(dcof[x]));
          }
        }
        printf("\n\n");
      break;
      case 'b':
        printf("\n*** D E R I V A D A   D E   U N   P R O D U C T O   D E   N   F U N C I O N E S ***\n\n");
        do 
        {
          printf("n: ");
          scanf("%d", &n);
          if(n<2) 
            printf("n debe ser mayor o igual a 2.\n\n");
        }while(n<2);
        putchar('\n');
        for(y=n; y>=1; --y)
        {
          while(x==n)
          {
            printf(" + \n");
            ++x;
          }
          for(x=1; x<y; ++x)
          {
            ++a;
            printf("(f_%d)", a);
          }
          ++a;
          printf("(f_%d)'", a);
          for(x=y; x<n; ++x)
          {
            ++a;
            printf("(f_%d)", a);
          }
          x=n;
          a=0;
        }
      break;
      case 'd': 
        printf("\n⡆⣐⢕⢕⢕⢕⢕⢕⢕⢕⠅⢗⢕⢕⢕⢕⢕⢕⢕⠕⠕⢕⢕⢕⢕⢕⢕⢕⢕⢕\n");
        printf("⢐⢕⢕⢕⢕⢕⣕⢕⢕⠕⠁⢕⢕⢕⢕⢕⢕⢕⢕⠅⡄⢕⢕⢕⢕⢕⢕⢕⢕⢕\n");
        printf("⢕⢕⢕⢕⢕⠅⢗⢕⠕⣠⠄⣗⢕⢕⠕⢕⢕⢕⠕}⠐⢕⢕⢕⠑⢕⢕⠵⢕\n");
        printf("⢕⢕⢕⢕⠁⢜⠕⢁⣴⣿⡇⢓⢕⢵⢐⢕⢕⠕⢁⣾⢿⣧⠑⢕⢕⠄⢑⢕⠅⢕\n");
        printf("⢕⢕⠵⢁⠔⢁⣤⣤⣶⣶⣶⡐⣕⢽⠐⢕⠕⣡⣾⣶⣶⣶⣤⡁⢓⢕⠄⢑⢅⢑\n"); 
        printf("⠍⣧⠄⣶⣾⣿⣿⣿⣿⣿⣿⣷⣔⢕⢄⢡⣾⣿⣿⣿⣿⣿⣿⣿⣦⡑⢕⢤⠱⢐\n");
        printf("⢠⢕⠅⣾⣿⠋⢿⣿⣿⣿⠉⣿⣿⣷⣦⣶⣽⣿⣿⠈⣿⣿⣿⣿⠏⢹⣷⣷⡅⢐\n");
        printf("⣔⢕⢥⢻⣿⡀⠈⠛⠛⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⡀⠈⠛⠛⠁⠄⣼⣿⣿⡇⢔\n");
        printf("⢕⢕⢽⢸⢟⢟⢖⢖⢤⣶⡟⢻⣿⡿⠻⣿⣿⡟⢀⣿⣦⢤⢤⢔⢞⢿⢿⣿⠁⢕\n");
        printf("⢕⢕⠅⣐⢕⢕⢕⢕⢕⣿⣿⡄⠛⢀⣦⠈⠛⢁⣼⣿⢗⢕⢕⢕⢕⢕⢕⡏⣘⢕\n");
        printf("⢕⢕⠅⢓⣕⣕⣕⣕⣵⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷⣕⢕⢕⢕⢕⡵⢀⢕⢕\n");
        printf("⢑⢕⠃⡈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃⢕⢕⢕\n");
        printf("⣆⢕⠄⢱⣄⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢁⢕⢕⠕⢁\n");
        printf("⣿⣦⡀⣿⣿⣷⣶⣬⣍⣛⣛⣛⡛⠿⠿⠿⠛⠛⢛⣛⣉⣭⣤⣂⢜⠕⢑⣡⣴⣿\n");
      break;
    }
  }
  printf("\nGracias por probar nuestro programa. ;)\n\n");
}
