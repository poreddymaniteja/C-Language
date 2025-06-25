// Read an integer as input, and print if the given number is even or odd //

#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a: ");
scanf("%d",&a);

if(a%2==0)
{
printf("%d is an even number\n",a);
}

else
{
printf("%d is an odd number\n",a);
}

return 0;
}

