// Write a calculator program that takes two integer numbers from the user, and one of the operands +,-,* and / as a character and prints the appropriate result using if else //

#include<stdio.h>
int main()
{
int a,b;
char c;

printf("Enter an operation: ");
scanf("%d%c%d",&a,&c,&b);

if(c=='+')
{
printf("%d%c%d=%d\n",a,c,b,a+b);
}

else if(c=='-')
{
printf("%d%c%d=%d\n",a,c,b,a-b);
}

else if(c=='*')
{
printf("%d%c%d=%d\n",a,c,b,a*b);
}

else if(c=='/')
{
printf("%d%c%d=%d\n",a,c,b,a/b);
}

else if(c=='%')
{
printf("%d%c%d=%d\n",a,c,b,a%b);
}

return 0;
}
