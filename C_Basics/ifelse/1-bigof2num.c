// Write a program to read 2 numbers and print the biggest of the two numbers //

#include<stdio.h>
int main()
{
float a,b;
printf("Enter the values of a and b: ");
scanf("%f%f",&a,&b);

if(a>b)
{
printf("The biggest number is %f \n",a);
}

else
{
printf("The biggest number is %f \n",b);
}

return 0;
}
