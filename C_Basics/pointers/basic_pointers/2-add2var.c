// Write a program to add two variables using their pointers

#include<stdio.h>
int main()
{
int *p1, *p2, x=0, y=0;

printf("Enter the value of x: ");
scanf("%d",&x);
p1=&x;

printf("Enter the value of y: ");
scanf("%d",&y);
p2=&y;

printf("Addition of %d and %d: %d\n",*p1,*p2,*p1+*p2);

return 0;
}
