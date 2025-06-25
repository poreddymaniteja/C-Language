/*9) Write a program to create a scenario where malloc() fails? And mentioned after how many bytes allocation is FAIL */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p;
p=(int*)malloc(100000000000000000* sizeof(int*));
if(p==NULL)
{
printf("memory allocation failed\n");
}
else
{
printf("memory allocation sucess\n");
}
}



