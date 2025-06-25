// Write a program to multiply two numbers without using * operator //

#include<stdio.h>
int main()
{
int a,b,i=0;
printf("Enter the values of a and b: ");
scanf("%d%d",&a,&b);

while(b>=0)
{
i=i+a;
b--;
}

printf("the value is %d\n",i);

return 0;
}
