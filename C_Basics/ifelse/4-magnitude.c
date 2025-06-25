// Take an integer as input and print its magnitude (remove sign and print only number) //

#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a: ");
scanf("%d",&a);

if(a<0)
{
printf("%d\n",a*-1);
}

else
{
printf("%d\n",a);
}

return 0;
}
