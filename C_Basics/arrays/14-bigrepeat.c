/* write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count.

eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};
output : biggest number is repeated 4 times */

#include<stdio.h>

int array(int arr[],int b)

{

	int i,m=0,count=0;
	for(i=0;i<b;i++)
	{
		if(arr[i]>m)
		{
			m=arr[i];

		}
	}
	printf("Biggest number: %d\n",m);
	for(i=0;i<b;i++)
	{
		if(arr[i]==m)
			count++;
	}
	return count;
}

int main()

{

int size,i,repeat=0;

printf("Enter the size of elements: ");
scanf("%d",&size);

int arr[size];

for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}

repeat=array(arr,size);

printf("the biggest number repeated %d times\n",repeat);
}
