// Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).

#include<stdio.h>
int main()
{
int *p1=0,x; 

printf("Size of pointer: %ls\n",p1);

printf("Enter the a value: ");
scanf("%d",&x);
p1=&x;

printf("the value %d has a size of %ld stored in %p address\n",*p1,sizeof(*p1),p1);

return 0;
}

// *p1 without null address is 0x7fff011ad31c
// *p1=0 with null address is 0x7ffeede9f7dc
// size of pointer p1 is (null)

