// Write a function that takes two numbers a and b as input arguments and returns their product as return value , without using * operator. //

/*
#include<stdio.h>
int pro(int a, int b)
{
int a,b,n;
int product;
n=b;

while(n>=o)
{
product=a+b;
b--;
}

return product;
}

int main()
{
int a,b;
int product;

printf("Enter a and B:");
scanf("%d%d",&a,&b);

if (a<0||b<0)
{
printf("Invalid number");
}

product=pro(a,b);

printf("Product of %d and %d: %d\n",a,b,product);

return 0;
}
*/

#include<stdio.h>

int add(int a,int b)
{
// int a,b,add;
// add=a+b;
return a+b;
}

int mul(int a,int b)
{
int product=0;
for ( ;a--; )
product=add(product,b);

return product;
}

#include<stdio.h>
int main()
{
int a,b,pro;
printf("Enter a and b: ");
scanf("%d%d",&a,&b);

if (a<0||b<0)
{
printf("Invalid number\n");
return 2;
}

/*
else if (a==0 || b==0)
{
printf("answer is 0\n");
return 1;
}
*/

pro=mul(a,b);

printf("product of a and b: %d\n",pro);

return 0;
}
