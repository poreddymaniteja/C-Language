/*12 Write an neg_to_pos function to modify the array such that all negative numbers are converted to positive.

void neg_to_pos ( int arr[] , int n);*/

#include<stdio.h>
void neg_to_pos(int arr[],int n);
int main ()
{
int n;
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
 //neg_to_pos(arr,n);
}
neg_to_pos(arr,n);
return 0;
}


void neg_to_pos(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",-1*arr[i]);
}
}
