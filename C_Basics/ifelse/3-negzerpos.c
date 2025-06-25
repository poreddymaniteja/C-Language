// C program to check whether a number is positive, negative or zero //

#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a: ");
scanf("%d",&a);

if(a<0)
{
printf("%d is a negative number\n",a);
}

else if(a==0)
{
printf("%d is a zero\n",a);
}

else
{
printf("%d is a positive number\n",a);
}

return 0;
}
