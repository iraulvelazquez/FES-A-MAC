#include <stdio.h>
int main()
{
  int num, x=0, s=0, p=0, c=0, n=0, pp=0;
  printf("Num: ");
  scanf("%d", &num);
  while(num!=999)
  {
    if(num==0)
      ++c;
    else 
      if(num<0)
        ++n;
      else
      {
        ++p;
        s+=num;
        ++pp;
      }
    ++x;
    printf("Num: ");
    scanf("%d", &num);
  }
  if(pp>0)
    printf("Promedio: %d\n", s/pp);
  else 
    printf("Sin promedio\n");
  printf("Positivos: %d\n", p);
  printf("Negativos: %d\n", n);
  printf("Ceros: %d\n", c);
}
