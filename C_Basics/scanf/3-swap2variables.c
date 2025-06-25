// Swap the values of 2 variables //

#include<stdio.h>
int main()
{
float A,B;
float swap;
printf("Enter value of A and B:");
scanf("%f%f", &A, &B);
swap=B;
B=0;
B=A;
A=0;
A=swap;
printf("Your A and B values are: %f %f \n", A, B);
return 0;
}
