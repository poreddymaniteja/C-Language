/*Declare a two-dimensional array of elements for sales details of a store, for each item, for each salesman. Take the sales values as input and print the array in matrix form.
  Find out and print the following :
  1 ) Total sales by each sales man
  2 ) Total sales for a item
  3 ) Total sales*/


#include<stdio.h>
int main()
{
	int sales[3][4]={2,4,6,8,10,12,14,16,18,20,22,24};

	int i,j,sum=0;
	for(i=0;i<3;i++)
	{

		for(j=0;j<4;j++)
		{
			printf("%d ",sales[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		sum=0;
		printf("sales by s%d is ",i);
		for(j=0;j<4;j++)
		{
			sum=sum+sales[i][j];

		}
		printf("%d\n",sum);
	}
	for(j=0;j<4;j++)
	{
		sum=0;
		printf("total sales for a %d item:",j);

		for(i=0;i<3;i++)
		{
			sum=sum+sales[i][j];

		}
		printf("%d\n",sum);
	}

	sum=0;
	printf("total sales :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum=sum+sales[i][j];
		}

	}
		
		printf("%d\n",sum);
}
