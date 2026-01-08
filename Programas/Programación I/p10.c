#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a != b && a != c && b != c)
    if(a>b)
      if(a>c)
        printf("Mayor a\n");
      else 
        printf("Mayor c\n");
    else
     if(b>c)
       printf("Mayor b\n");
     else 
       printf("Mayor c\n");
  else 
    printf("Alguno es igual\n");
}

