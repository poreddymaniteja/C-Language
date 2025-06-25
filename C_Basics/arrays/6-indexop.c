// Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1 //

#include<stdio.h>
int i,size;

int arr1(int arr[],int size,int e)
{

for(i=0;i<size;i++)
{

if(arr[i]==e)
return i;
}

return -1;

}


int main()
{

printf("Enter the size of array: ");
scanf("%d",&size);

int arr[size];

for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}

printf("\n");

int element;

printf("Enter the element: ");
scanf("%d",&element);

int index;

index=arr1(arr,size,element);

if(index==-1)
{
printf("Index not fount\n");
}

else
{
printf("the element %d index is %d\n",element,index);
}

return 0;
}
