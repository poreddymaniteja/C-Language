/*5	Search for an element in a two dimensional array, and print its position - as row and column numbers. write a search function that will receive the array and return row and column indexes as output. */


#include<stdio.h>
int search(int r,int c,int n,int arr[][c],int *row,int *column)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(arr[i][j]==n)
			{
				*row = i;
				*column = j;
				return 1;
			}
		}
	}
}
int main()
{
	int r,c,n,i,j;
	printf("enter no of rows and coiumns:");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	printf("enter %d elements:",(r*c));	
       for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int row,column;
        printf("enter element to search:\n");
        scanf("%d",&n);
	int k=search (r,c,n,arr,&row,&column);
	if(k==1)
		printf("element found at row is %d and column is %d",row,column);
	if(k==0)
		printf("element not found");
	return 0;
}




/*enter no of rows and coiumns:3 3
enter 9 elements:1 2 3 4 5 6 7 8 9
enter element to search:
4
element found at row is 1 and column is 0 */

