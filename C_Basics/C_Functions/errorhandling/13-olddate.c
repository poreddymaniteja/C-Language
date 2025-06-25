// Write a function that takes 2 dates as inputs, and returns 1 if the first date is old, 2 if the second date is old.


#include<stdio.h>
int older(int d1,int m1,int y1,int d2,int m2,int y2)
{
if(y1<y2)
{
 return 1;
}
else if(y2<y1)
{
 return 2;
}
else
{
	if(y1==y2 && m2<m1)
	{
	 return 2;
	}
	else if(m2==m1 && m1<m2)
	{
	 return 1;
	}
	else if(m2==m1 && d2<d1)
	{
	 return 2;
	}
	else if(m2==m1 && d1<d2)
	{
	 return 1;	 
	}
}
}
int main()
{
int x,d1,d2,m1,m2,y1,y2;
printf("Enter the Date -1 :");
scanf("%d-%d-%d",&d1,&m1,&y1);
printf("Enter the date -2 :");
scanf("%d-%d-%d",&d2,&m2,&y2);
x=older(d1,m1,y1,d2,m2,y2);
if(x==1)
printf("Date 1 is older ");
else if(x==2)
printf("Date -2 is older ");
return 0;
}
