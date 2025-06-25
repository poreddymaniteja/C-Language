// Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid?

#include<stdio.h>
int IsDateValide(int d,int m,int y)
{ 
	if((y%400==0) || (y%4==0 && y%100!=0))
	{
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
			if(d>0 && d<32)
			{
				return 1;
			}
			else 
			{
				return 0;
			}
		}
		else if(m==4 || m==6 || m==9 || m==11) 
		{
			if(d>0 && d<31)
			{
				return 1;
			}
			else 
				return 0;
		}
		else if(m==2)
		{
			if(d>0 && d<30)
			{
				return 1;
			}
			else return 0;
		}
	}
	else
	{ 
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
			if(d>0 && d<32)
			{
				return 1;
			}
			else 
				return 0;
		}
		else if(m==4 || m==6 || m==9 || m==11)
		{
			if(d>0 && d<31)
			{
				return 1;
			}
			else return 0;
		}
		else if(m==2)
		{
			if(d>0 && d<29)
			{
				return 1;
			}
			else 
				return 0;
		}
	}
}

int main()
{
	int d,m,y,c;
	printf("Enter the date :");
	scanf("%d-%d-%d",&d,&m,&y);
	c=IsDateValide(d,m,y);
	if(c==1)
		printf("%d-%d-%d is a valid date",d,m,y);
	else
		printf("%d-%d-%d is not a valid date",d,m,y);
	return 0;
}
