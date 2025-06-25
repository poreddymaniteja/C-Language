//  Write a program to print an in reverse order. //

#include<stdio.h>
int main()
{

int i,size;

printf("Enter the size of array: ");
scanf("%d",&size);

int arr[size];

for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}

printf("\n");

for(i=i-1;i>=0;i--)
{
printf("%d ",arr[i]);
}

printf("\n");

return 0;
} 

