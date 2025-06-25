// Write a program  for matrix multiplication.

#include<stdio.h>
int main()
{
	int i,j,k,l,r,c,rr,cc;

	printf("Enter the rows in matrix 1: ");	
	scanf("%d",&r);

	printf("Enter the columns in matrix 1: ");
	scanf("%d",&c);

	int matrix1[r][c];

	printf("Enter the values in matrix 1: \n");

	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}

	printf("\n");

	printf("Enter the rows in matrix 2: ");	
	scanf("%d",&rr);

	printf("Enter the columns in matrix 2: ");
	scanf("%d",&cc);

	int matrix2[rr][cc];

	printf("Enter the values in matrix 2: \n");
 
	for(k=0;k<r;k++)
	{

		for(l=0;l<c;l++)
		{
			scanf("%d",&matrix2[k][l]);
		}
	}

	
	printf("\nMultiplication of both matrixes are :\n");

	for(k=0;k<r;k++)
	{
		for(l=0;l<c;l++)
		{
			printf("%d ",matrix1[i][j]*matrix2[k][l]);
		}
		printf("\n");
	}

return 0;
}
