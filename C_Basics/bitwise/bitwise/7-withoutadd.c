// WAP implements addition functionality without using ADD('+') Operator.

#include<stdio.h>

int main()
{
int a,b;
printf("Enter two values: ");
scanf("%x%x",&a,&b);
a=(a-(~b))-1; // a-(~b-(-1));
printf("Add: %x\n",a);
return 0;
}
 
