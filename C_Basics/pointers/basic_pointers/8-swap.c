// Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.

#include<stdio.h>
int main()
{
int x,y,z,swap=0;
int *p1,*p2,*p3;

p1=&x;
p2=&y;
p3=&z;

printf("Enter the values of x,y,z: ");
scanf("%d %d %d",p1,p2,p3);

swap=*p1;
*p1=*p2;
*p2=*p3;
*p3=swap;

printf(" x = %d\n y = %d\n z = %d\n \n",*p1,*p2,*p3);

return 0;
}
