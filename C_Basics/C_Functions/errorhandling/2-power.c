// Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n
//

#include<stdio.h>

int power(int a,int n)
{
int po=a;

while (n>1)
{
po=po*a;

n--;
}

return po;
}

int main()
{
int a,n,po;

printf("Enter the base: ");
scanf("%d",&a);

printf("Enter the power: ");
scanf("%d",&n);


if(n<0 || a<=0)
{
printf("Enter a valid number");
return 2;
}

if(n==0 || a<=0)
{
printf("the answer is 1\n");
return 1;
}

po=power(a,n);

printf("%d to the power of %d : %d \n",a,n,po);

//printf("%d to the power of %d : %d\n",a,n,power(a,n));

return 0;
}
