// Read n number of numbers from user (n value taken as input) and print if each number is even or odd //

#include<stdio.h>
int main()
{
int a,n;
printf("Enter the value: ");
scanf("%d",&n);

while (n>0)
{
printf("Enter the value of a: ");
scanf("%d",&a);
if(a%2==0)
{
printf("%d is even number\n",a);
}
else 
{
printf("%d is odd number\n",a);
}
n--;
}
return 0;
}

