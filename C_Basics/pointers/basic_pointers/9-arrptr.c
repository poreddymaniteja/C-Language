// Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.

#include<stdio.h>
int main()
{
int arr[10];
int i;
int *p;

printf("Enter the elements of array: ");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("\n");

for(i=0;i<10;i++)
{
p=&arr[i];
printf("%d is stored in %p\n",arr[i],p);
}

return 0;
}
