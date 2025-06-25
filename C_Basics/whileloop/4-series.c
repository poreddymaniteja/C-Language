/* Write a program to print the value of below series:
1 - 1/2 + 1/3 - 1/4 .... + 1/n etc */

#include<stdio.h>
int main()
{
int n,i=1;
float sum=0;
printf("Enter a value: ");
scanf("%d",&n);

while (i<=n)
{
sum=sum+(float)1/i;
i++;

if (i<=n)
{
sum=sum-(float)1/i;
i++;
}

else
break;
}

printf("sum : %f\n", sum);
}

