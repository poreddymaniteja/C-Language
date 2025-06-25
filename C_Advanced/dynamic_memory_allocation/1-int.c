// 1) create an integer dynamically,read and print its value //

#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr;

ptr = (int *)malloc(sizeof(int));

*ptr=69;

printf("%d\n",*ptr);
printf("%p\n",ptr);

return 0;
}
