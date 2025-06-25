// Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value //


#include<stdio.h>

int add();
int sub();
int mul();
int quo();
int rem();

int a,b;

int main()
{

char c;

label: 
printf("Enter a and b: ");
scanf("%d%d",&a,&b);

printf("Enter character (+ - * / %%) : ");
scanf(" %c",&c);

switch (c)
{
case '+': printf("Addition of %d and %d: %d\n",a,b,add()); break;

case '-': printf("Subtraction of %d and %d: %d\n",a,b,sub()); break;

case '*': printf("Multiplication of %d and %d: %d\n",a,b,mul()); break;

case '/': printf("Division of %d and %d: %d\n",a,b,quo()); break;

case '%': printf("Remainder of %d and %d: %d\n",a,b,rem()); break;

default: printf("Invalid\n"); goto label;
}
return 0;
}
