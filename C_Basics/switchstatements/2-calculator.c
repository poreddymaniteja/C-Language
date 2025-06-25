// Write the calculator program using switch case statement //

#include<stdio.h>
int main()
{
int a,b;
char c;
printf("Enter the values of a operation b: ");
scanf("%d%c%d",&a,&c,&b);

switch (c)
{
case '+': printf("Addition: %d\n",a+b);
break;
case '-': printf("Subtraction: %d\n",a-b);
break;
case '*': printf("Multiplication: %d\n",a*b);
break;
case '/': printf("Division: %d\n",a/b);
break;
case '%': printf("Modulus: %d\n",a%b);
break;

default: printf("not a valid operator\n");
}

return 0;
}
