// WAP Swap any two numbers using bitwise operators. How does it work?

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("Before swapping : a = %d  b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping : a = %d  b=%d\n",a,b);
	return 0;
}

/*

   Enter two numbers : 25 44
   Before swapping : a = 25  b=44
   After swapping : a = 44  b=25

 */
