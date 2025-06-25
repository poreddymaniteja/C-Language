#include<stdio.h>
void fun(int arr[])
{
for(int i=0;i<10;i++)
arr[i]=arr[i]*arr[i];
}

int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
fun(arr);
for(int i=0;i<10;i++)
printf("%d ",arr[i]);
}

