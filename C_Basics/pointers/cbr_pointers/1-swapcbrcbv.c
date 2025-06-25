// Write a program to swap two numbers using Call by Value and Call by Reference

#include<stdio.h>

void swap_cbv(int x,int y)
{
	int temp = 0;

	temp=x;
	x=y;
	y=temp;

	printf("swap_cbv:\n %d address: %p\n %d address: %p\n",x,&x,y,&y);
}

void swap_cbr(int *a,int *b)
{
	int temp=0;

	temp=*a;
	*a=*b;
	*b=temp;

	printf("swap_cbr:\n %d address: %p\n %d address: %p\n",*a,a,*b,b);
}

int main()
{
	int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);

	printf("Before swap %d %d\n\n",a,b);
	
	swap_cbv(a,b);
	printf("after swapping cbv:\n %d address: %p\n %d address: %p\n\n",a,&a,b,&b);

	swap_cbr(&a,&b);
		printf("after swapping cbr:\n %d address: %p\n %d address: %p\n\n",a,&a,b,&b);

	return 0;
}
