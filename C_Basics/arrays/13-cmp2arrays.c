/*13. write an compare function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as separate arguments)

  int compare(int arr1[],int m,int arr2[],int n)
 */

#include<stdio.h>
int compare(int arr1[],int m,int arr2[],int n);
int main()
{
	int c,n,m,i;
	scanf("%d%d",&m,&n);
	int arr1[m],arr2[n];
	for(i=0;i<m;i++)
		scanf("%d",&arr1[i]);
	for(i=0;i<n;i++)
		scanf("%d",&arr2[i]);
	c=compare(arr1,m,arr2,n);
	if(c==0)
		printf("The size of both the arrays are diferent");
	else
		printf("The size of both arrays are same");

	return 0;
}


int compare(int arr1[],int m,int arr2[],int n)
{
	int i;
	if(m==n)
	{
		for(i=0;i<m;i++)
			if(arr1[i]!=arr2[i])
				return 0;
	}
	else
		return 0;

	return 1;
}
