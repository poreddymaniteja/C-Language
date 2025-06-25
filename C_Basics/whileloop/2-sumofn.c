// write a program to read a number n, and print sum of all the numbers from 1 to n //

#include<stdio.h>
int main()
{
int a,n=0;
printf("Enter the value: ");
scanf("%d",&a);

while(a>0)
{
n=n+a;
a--;
printf("sum: %d\n",n);
}

return 0;
}



