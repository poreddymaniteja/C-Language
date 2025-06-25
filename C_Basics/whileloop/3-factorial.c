// Write a program to read a number n and print the factorial of n //

#include<stdio.h>
int main()
{
int a,n=1;
printf("Enter the value: ");
scanf("%d",&a);

while (a>0)
{
n=n*a;
a--;
printf("your n! is %d\n",n);
}

if(a<0)
{
printf("it is not a valid number\n");
}

return 0;
}

