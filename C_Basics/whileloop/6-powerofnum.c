/* Write a program to find the power of a number to the given number.
eg.,input : 3 5
output: 3 to the power of 5 -> 243 */

#include<stdio.h>
int main()
{
int a,b,c,power=1;
printf("Enter the values of a and b: ");
scanf("%d%d",&a,&b);
c=b;
while(c>0)
{
power=power*a;
c--;
}

printf("%d to the power of %d : %d\n",a,b,power);

return 0;
}
