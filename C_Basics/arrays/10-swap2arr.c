/*
Write a program to swap two arrays in reverse order.
Example: 
input :
array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};

output:
array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}
*/

#include<stdio.h>
int main()
{

int i,size,temp=0,c;

printf("Enter the size of array: ");
scanf("%d",&size);

int arr1[size];
int arr2[size];

printf("Enter elements of arr1: \n");

for(i=0;i<size;i++)
{
scanf("%d",&arr1[i]);
}

printf("Enter elements of arr2: \n");

for(i=0;i<size;i++)
{
scanf("%d",&arr2[i]);
}

c=size-1;

for(i=0;i<(size/2);i++)
{
temp=arr1[i];
arr1[i]=arr1[c-i];
arr1[c-i]=temp;
temp=arr2[i];
arr2[i]=arr2[c-i];
arr2[c-i]=temp;
}


for(i=0;i<size;i++)
{
temp = arr1[i];
arr1[i]=arr2[i];
arr2[i]=temp;
}


printf("arr1: \n");
for(i=0;i<size;i++)
{
printf("%d ",arr1[i]);
}

printf("\n");
printf("arr2: \n");

for(i=0;i<size;i++)
{
printf("%d ",arr2[i]);
}

printf("\n");
return 0;
}


