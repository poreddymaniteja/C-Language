// Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function

#include<stdio.h>

void diff(int *a,int *b,int *add, int *sub, int *mul,int *quo, int *rem)
{

*add = *a + *b;
*sub = *a - *b;
*mul = *a * *b;
*quo = *a / *b;
*rem = *a % *b;

}

int main()
{
int a,b,add,sub,mul,quo,rem;

printf("Enter the values of a and b: ");
scanf("%d %d",&a,&b);

diff(&a,&b,&add,&sub,&mul,&quo,&rem);

printf("Add: %d\nSub: %d\nMul: %d\nQuo: %d\nRem: %d\n",add,sub,mul,quo,rem);
return 0;
}

