#include <stdio.h>
int main()
{
  float por=0, com=0, vta;
  scanf("%f",&vta);
  if(vta<=0)
    printf("Error#");
  else 
  {
    if(vta<=5000)
      por=.10;
    else 
      if(vta<=10000)
        por=.15;
      else 
        por=.18;
    com=por*vta;
    printf("Porcentaje=%f\n",por);
    printf("Comisión=%f\n",com);
  }
}
