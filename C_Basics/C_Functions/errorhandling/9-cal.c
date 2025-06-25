/* 
Write a calculator program with 5 functions below to do the operations of addition, subtraction, multiplication, division for quotient and division for remainder.
1) int add (int a, int b) // to be called when user chooses +
2) int sub (int a,int b) // to be called when user chooses -
3) int mul(int a, int b) // to be called when user chooses *
4) int quotient(int a, int b) // to be called when user chooses /
5) int remainder(int a,int b) // to be called when user choose%
*/

#include<stdio.h>

int add(int ,int );

int sub(int ,int );

int mul(int ,int );

int quo(int ,int );

int rem(int ,int );


int main()
{
int a,b;
char c;

label: 
printf("Enter the values of a and b: ");
scanf("%d%d",&a,&b);

printf("enter the character (+ - * / %%): ");
scanf(" %c",&c);

switch (c)
{

case '+': printf("%d%c%d=%d\n",a,c,b,add(a,b)); break;

case '-': printf("%d%c%d=%d\n",a,c,b,sub(a,b)); break;

case '*': printf("%d%c%d=%d\n",a,c,b,mul(a,b)); break;

case '/': printf("%d%c%d=%d\n",a,c,b,quo(a,b)); break;

case '%': printf("%d%c%d=%d\n",a,c,b,rem(a,b)); break;

default: printf("Invalid\n"); goto label;

return 0;
}

}

int add(int a, int b)
{

return a+b;
}

int sub(int a, int b)
{

return a-b;
}

int mul(int a, int b)
{

return a*b;
}

int quo(int a, int b)
{

return a/b;
}

int rem(int a, int b)
{

return a%b;
}


