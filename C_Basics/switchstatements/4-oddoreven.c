// C program to check whether a number is odd or even using switch statement //

#include<stdio.h>
int main()
{
int a;
printf("Enter the values of a: ");
scanf("%d",&a);

switch(a%2)
{
case 0: printf("%d is even\n",a);
break;
case 1: printf("%d is odd\n",a);
break;

default: printf("Invalid\n");
}

return 0;
}

