// Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in the operations file and be used to print in main //


#include<stdio.h>

void add();
void sub();
void mul();
void quo();
void rem();

extern int c;
int a,b;

int main()
{

char ch;

label: 
printf("Enter a and b: ");
scanf("%d%d",&a,&b);

printf("Enter character (+ - * / %%) : ");
scanf(" %c",&ch);

switch (ch)
{
case '+': add(); printf("Addition of %d and %d: %d\n",a,b,c); break;

case '-': sub(); printf("Subtraction of %d and %d: %d\n",a,b,c); break;

case '*': mul(); printf("Multiplication of %d and %d: %d\n",a,b,c); break;

case '/': quo(); printf("Division of %d and %d: %d\n",a,b,c); break;

case '%': rem(); printf("Remainder of %d and %d: %d\n",a,b,c); break;

default: printf("Invalid\n"); goto label;
}
return 0;
}
