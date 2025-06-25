#include<stdio.h>
#include<stdlib.h>

int main()
{
int x=5;
void *ptr;
ptr=&x;

printf("%p\n",(int *)ptr); // "%d\n",*(int *)ptr

return 0;
}
