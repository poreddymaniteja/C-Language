// C program to find biggest of two numbers using switch statement //

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values of a & b: ");
scanf("%d%d",&a,&b);

switch (a>b)
{
case 0: printf("%d is bigger\n",a);
break;
case 1: printf("%d is bigger\n",b);
break;
}

return 0;
}

