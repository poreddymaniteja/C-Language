/*
Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add also 5 to each element and print 6 – 105 numbers 
*/

#include<stdio.h>
int main()
{
int arr[100];
int i;

for(i=0;i<100;i++)
{
arr[i]=i+1;
}
printf("Assign numbers: \n");

for(i=0;i<100;i++)
{
printf("%d ",arr[i]);
}

printf("\n\nEven number: \n");
for(i=0;i<100;i++)
{

if(arr[i]%2==0)
{

printf("%d ",arr[i]);
}
}

printf("\nOdd numbers: \n");

for(i=0;i<100;i++)
{

if(arr[i]%2!=0)
{
printf("%d ",arr[i]);
}

}
printf("\n");

printf("\nAdding 5 to each element: \n");

for(i=0;i<100;i++)
{
arr[i]+=5;
}

for(i=0;i<100;i++)
{
printf("%d ",arr[i]);
}

printf("\n");

return 0;
}

