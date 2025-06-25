// WAP implements subtraction functionality without using SUB('-') Operator. 

/* #include<stdio.h>
int main()
{
int a,b,result;
printf("Enter two values: ");
scanf("%x%x",&a,&b);
a=a+(~b+1);
printf("Sub: %d\n",a);
return 0;
}
*/

#include <stdio.h>


int subtract(int a, int b) 
{

	while (b != 0) 
	{

		int borrow = (~a) & b;
		a = a ^ b;
		b = borrow << 1;
	}

	return a;
}

int main() 
{
	int a,b;

	printf("Enter two numbers: ");
	scanf("%x%x",&a,&b);

	int result = subtract(a, b);
	printf("Result: %d\n", result);

	return 0;
}
