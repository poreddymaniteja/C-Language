// Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).


#include<stdio.h>
int main()
{
int *ptr,x=2;

printf("address of variable: %p\n",&x);
printf("value of variable: %d\n",x);
printf("size of variable: %ld\n",sizeof(x));

ptr=&x;

*ptr=3;

printf("address of pointer holding variable: %p\n",ptr);
printf("value of pointer holding variable: %d\n",*ptr);
printf("size of pointer: %ld\n",sizeof(ptr));

return 0;
}

