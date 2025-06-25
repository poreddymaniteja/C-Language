/* Write the following program :
Declare a two dimensional array of elements and find and print its transpose.
eg., if the matrix is :       1 3
                              4 5
                              7 8

its transpose should be :     1 4 7
                              3 5 8 */

#include<stdio.h>
int main()
{
	int i,j,r,c,sum=0;

	printf("Enter the rows: ");	
	scanf("%d",&r);

	printf("Enter the columns: ");
	scanf("%d",&c);

	int sales[r][c];

	printf("Enter the values in matrix: \n");

	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			scanf("%d",&sales[i][j]);
		}
	}
	
	printf("\nGiven Matrix: \n");	

	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			printf("%d ",sales[i][j]);
		}
		printf("\n");
	}

	printf("\nThe changed matrix: \n");

	for(i=0;i<c;i++)
	{

		for(j=0;j<r;j++)
		{
			printf("%d ",sales[j][i]);
		}
		printf("\n");
	}

return 0;
}
