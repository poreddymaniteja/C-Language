// Take an integer as input and print its magnitude (remove sign) //

#include<stdio.h>
int main()
{
int a;
printf("Enter an integer with symbol: ");
scanf("%d",&a);

a>0?printf("%d\n",a):printf("%d\n",-a);

return 0;
}
