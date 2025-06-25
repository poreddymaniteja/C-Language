// Write a program to read 4 numbers and print the biggest of them //

#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter numbers :");
scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
				printf("%d is biggest\n",a);
		}
	}
	else if(b>c)
	{
		if(b>d)
			printf("%d is biggest\n",b);
	}
	else if(c>d)
		printf("%d is biggest\n",c);
	else
		printf("%d is biggest\n",d);
	return 0;
}

