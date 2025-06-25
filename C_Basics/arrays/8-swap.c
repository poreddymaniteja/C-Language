/* Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1} */

#include<stdio.h>
int main()
{

int i,size,temp,c;

printf("Enter the size of array: ");
scanf("%d",&size);

int arr1[size];

for(i=0;i<size;i++)
{
scanf("%d",&arr1[i]);
}

for (i=0,c=(size-1);i<(size/2);i++)
{
temp=arr1[i];
arr1[i]=arr1[c-i];
arr1[c-i]=temp;
}

for(i=0;i<size;i++)
{
printf("%d ",arr1[i]);
}

printf("\n");
return 0;
}



