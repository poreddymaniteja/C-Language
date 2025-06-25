// Write a program to read 3 numbers and print the biggest of them //

#include<stdio.h>
int main()
{
int a,b,c,B;
printf("Enter the values of a, b and c: ");
scanf("%d%d%d",&a,&b,&c);

if(a>b)
{
B=a;
}

else 
{
B=b;
}

if(B>c)
{
printf("%d is the biggest number\n",B);
}

else
{
printf("%d is the biggest number\n",c);
}

return 0;
}
