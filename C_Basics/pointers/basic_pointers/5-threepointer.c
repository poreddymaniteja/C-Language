// Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.

#include<stdio.h>
int main()
{
int *p1, *p2, *p3, x=1;

p1=p2=p3=&x;

printf("%d %d %d\n",*p1,*p2,*p3);

x=5;
printf("%d %d %d\n",*p1,*p2,*p3);

*p1=6;
printf("%d %d %d\n",*p1,*p2,*p3);

*p2=7;
printf("%d %d %d\n",*p1,*p2,*p3);

*p3=8;
printf("%d %d %d\n",*p1,*p2,*p3);

return 0;
}

