// Area and Perimeter of Rectangle //

#include<stdio.h>
int main()
{
float  l,b,P,A;
printf("Enter the lenght and breadth of the rectangle :\n");
scanf("%f %f",&l,&b);
P = 2*(l+b);
printf("Perimeter of the rectangle is : %f\n",P);
A = l*b;
printf("Area of the rectangle : %f\n",A);
return 0;
}

