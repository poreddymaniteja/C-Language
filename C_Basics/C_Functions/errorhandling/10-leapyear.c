// Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0 //

#include<stdio.h>
int year(int y)
{
	if((y%400==0) || (y%4==0  && y%100!=0))
		return 1;
	else 
		return 0;
}
int main()
{
	int y,n;
	printf("Enter the year :");
	scanf("%d",&y);
	n=year(y);
	if(n==1)
		printf("The given year %d is a leap year ",y);
	else if(n==0)
		printf("The given year %d is not a leap year",y);
	return 0;
}

/*input - 2004
output  - The given year 2004 is a leap year*/
