// Read a number from the user, and print its multiplication table upto 10 multiples //

#include<stdio.h>
int main()
{
int x=1,a,n;

printf("Enter n character: ");
scanf("%d",&n);

while (n>0)
{
printf("Enter which mul table u want: ");
scanf("%d",&a);

while (x<=10)
{
printf("%d*%d=%d\n",a,x,a*x);
x++;
}
x=1;
n--;
}

return 0;
}
