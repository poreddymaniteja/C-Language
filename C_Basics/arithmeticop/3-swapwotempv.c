// Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x //

#include <stdio.h>
int main() 
{
int x,y,z;
printf("Enter the value of x, y and z: ");
scanf("%d%d%d", &x, &y, &z);

//printf("swaping x and y ");
x=x+y;
//printf("%d\n",x);
y=x-y;
//printf("%d\n",y);
x=x-y;
//printf("%d\n",x);
printf("%d %d %d\n", x, y, z);

//printf("swaping y and z ");
y=y+z;
//printf("%d\n",y);
z=y-z;
//printf("%d\n",z);
y=y-z;
//printf("%d\n",z);
printf("%d %d %d\n", x, y, z);

//printf("swaping z and x ");
z=z+x;
//printf("%d\n",z);
x=z-x;
//printf("%d\n",x);
z=z-x;
//printf("%d\n",z);
printf("%d %d %d\n", x, y, z);

return 0;
}
