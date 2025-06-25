// Write a function that takes two numbers a and b, and returns the quotient after dividing a with b. //

#include<stdio.h>

int quo(int a, int b)
{
int q;
q=a/b;

return q;
}

int main()
{
int a,b,qu;
printf("Enter the values of a and b: ");
scanf("%d%d",&a,&b);

qu=quo(a,b);

printf("%d\n",qu);

return 0;
}
