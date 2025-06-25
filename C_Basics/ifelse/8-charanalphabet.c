// Read a character and print if the given character is an alphabet or not //

#include<stdio.h>
int main()
{
char c;
printf("Enter a character: ");
scanf("%c",&c);

if(c>='a')
	{
		if(c<='z')
		{
			printf("%c is an alphabet\n",c);
		}
		else
		{
			printf("%c is not an alphabet\n",c);
		}
	}
else if(c>='A')
	{
		if(c<='Z')
		{
			printf("%c is an alphabet\n",c);
		}
		else
		{	
			printf("%c is not an alphabet\n",c);

		}
	}
else 
{
printf("%c is not an alphabet\n",c);
}

return 0;
}






