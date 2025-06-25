// WAP whether a number is ODD or EVEN using bitwise

#include<stdio.h>
#define CHECK_BIT(x,p) x&(0x1<<p)

int main()
{
int x,p=0,check;

printf("Enter the hexa value: ");
scanf("%x",&x);

check=CHECK_BIT(x,p);

if(check==0)
printf("EVEN\n");

else
printf("ODD\n");

return 0;
}
