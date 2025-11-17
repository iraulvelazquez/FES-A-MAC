#include <stdio.h> 
#define IVA 0.16
int main()
{
 int a=0, b=0, c=0, aux=0;
 const int s=250;
 printf("Sueldo de empleado\n");
 printf("Horas: ");
 scanf("%d", &a);
 if (a>0)
 {
   b=a*s;
   aux=b*IVA;
   c=b-aux;
   printf("IVA implementado: %d\n", aux);
   printf("Sueldo bruto: %d\n", b);
   printf("Sueldo a pagar: %d\n", c);
 }
 else 
   printf("Horas inválidas\n");
 printf("Velázquez Ramírez Carlos Raúl\n");
}
