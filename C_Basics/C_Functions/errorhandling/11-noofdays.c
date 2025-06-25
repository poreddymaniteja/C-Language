// Write a function to accept a month and year as input, and return the number of days in that month as output. print the number of days in main. //


#include<stdio.h>
int days(int y,int m)
{
	if((y%400==0) || (y%4==0  && y%100!=0))
	{
		if(m>0 && m<=12)
		{
			if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			{
				return 31;
			}
			else if(m==2)
			{
				return 29;
			}
			else if(m==4||m==6||m==9||m==11)
			{
				return 30;
			}
		}
	}
	else 
	{
		if(m>0 && m<=12)
		{
			if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			{
				return 31;
			}
			else if(m==2)
			{
				return 28;
			}
			else if(m==4||m==6||m==9||m==11)
			{
				return 30;
			}
		}

	}

	return 0;
}

int main()
{
	int y,m,n;
	printf("Enter the year and month :");
	scanf("%d%d",&y,&m);
	n=days(y,m);
		printf("The number of days in %d month : %d",m,n);

	return 0;
}

/*input - 2002 12
outout  - The number of days in 12  month : 31*/
