// Write a program to print an integer in binary format using arrays //

#include<stdio.h>
int main()
{
int i=63,binary=0,integer;
int arr[64]={0};

printf("Enter an integer: ");
scanf("%d",&integer);


while(integer>0)
{
binary=integer%2;
arr[i]=binary;
integer=integer/2;
i--;
}

for(i=0;i<64;i++)
{
printf("%d ",arr[i]);
}

return 0;
}
