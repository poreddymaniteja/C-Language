// Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print //

#include<stdio.h>
int main()
{
int arr[10];
int max=0,min=0,imax=0,imin=0;
int i;

for(i=0;i<10;i++)
{
printf("Enter the value %d: ",i);
scanf("%d",&arr[i]);
}

max=arr[0];
min=arr[0];

for(i=0;i<10;i++)
{
	if(max<arr[i])
	{
	max=arr[i];
	imax=i;
	}
	
	else
	{	
		if(min>arr[i])
		{		
		min=arr[i];
		imin=i;
		}
	}
}

printf("\nbiggest is arr[%d] - %d \n",imax,max);
printf("smallest is arr[%d] - %d \n",imin,min);

return 0;
}
