// Write a function that takes two numbers a and b, and returns the remainder after dividing a with b //

#include<stdio.h>

int rem(int a, int b)
{
int r;
r=a%b;

return r;
}

int main()
{
int a,b,re;
printf("Enter the values of a and b: ");
scanf("%d%d",&a,&b);

re=rem(a,b);

printf("%d\n",re);

return 0;
}

