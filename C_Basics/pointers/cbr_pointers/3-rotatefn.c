// Write a function that can rotate the values of three variables. print the results in the main function.

#include<stdio.h>

void rotate(int *a,int *b,int *c)
{
	int rotate;
	rotate=*a;
	*a=*b;
	*b=*c;
	*c=rotate;
}

int main()
{
	int a,b,c;
	printf("Enter the values of a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);

	printf("before rotating: %d %d %d\n",a,b,c);

	rotate(&a,&b,&c);
	printf("after rotating: %d %d %d\n",a,b,c);

	return 0;
}
