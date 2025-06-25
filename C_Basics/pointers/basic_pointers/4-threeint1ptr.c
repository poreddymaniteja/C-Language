// Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.

#include<stdio.h>
int main()
{
int x=1,y=2,z=3;
int *ptr;

ptr=&x;
printf("x value: %d\n",*ptr);

ptr=&y;
printf("y value: %d\n",*ptr);

ptr=&z;
printf("z value: %d\n",*ptr);

return 0;
}

