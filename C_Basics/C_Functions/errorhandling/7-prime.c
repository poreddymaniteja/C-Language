/*
write a function that can take an integer as input and return 1 if the number is prime number,  return 0 if it is not prime and print appropriate output message in main according to output.
return type is integer. function name IsPrime - returns int (0 or 1) */

int prime(int a,int b)
{
return a%b;
}

int primecheck(int a)
{
int i;

for(i=2;i<=a/2;i++)
{
if(a%i==0)
return 1;
}
return 0;
}

#include<stdio.h>
int main()
{
int a,b;

printf("Enter the strating and ending values: ");
scanf("%d%d",&a,&b);

while (a<=b)
{

if(primecheck(a))
{
printf("%d is prime number \n",a);
a++;
}
}
return 0;

}
