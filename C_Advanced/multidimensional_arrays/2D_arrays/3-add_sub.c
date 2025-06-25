// Write a program  for matrix addition and subtraction.

#include<stdio.h>
int main()
{
	int i,j,r,c;

	printf("Enter the rows: ");	
	scanf("%d",&r);

	printf("Enter the columns: ");
	scanf("%d",&c);

	int matrix1[r][c];
	int matrix2[r][c];

	printf("Enter the values in matrix 1: \n");

	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}

	printf("\n");

	printf("Enter the values in matrix 2: \n");
 
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}

	printf("\nAddition of both matrixes are :\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",matrix1[i][j]+matrix2[i][j]);
		}
		printf("\n");
	}

	printf("\nSUbtraction of both matrixes are :\n");

	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{
			printf("%d ",matrix1[i][j]-matrix2[i][j]);
		}
		printf("\n");
	}

return 0;

}
