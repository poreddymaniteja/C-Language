// Write a program to find the biggest of three numbers using pointers that point to those numbers.

#include<stdio.h>
int main()
{
int x,y,z;
int *p1,*p2,*p3;

p1=&x;
p2=&y;
p3=&z;

printf("enter the values of x,y,z: ");
scanf("%d %d %d",p1,p2,p3);

if(*p1>*p2 && *p1>*p3) // ||*p1==*p2||*p1==*p3)
printf("%d is bigger\n",*p1);

if(*p2>*p1 && *p2>*p3) // ||*p1==*p2||*p3==*p2)
printf("%d is bigger\n",*p2);

if(*p3>*p1 && *p3>*p2) // ||*p1==*p3||*p3==*p2)
printf("%d is bigger\n",*p3);

//else
//printf("They are equal\n");

return 0;
}
