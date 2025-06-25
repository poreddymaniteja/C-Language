// Read two numbers from the user, and print all odd numbers between those numbers and then all even numbers //

#include<stdio.h>
int main()
{
int a,b,temp;

printf("Enter a and b: ");
scanf("%d%d",&a,&b);

temp=a;
printf("Even numbers: \n");
while(a<=b)
{
if(a%2==0)
{
printf("%d ",a);
}
a++;
}

a=temp;
printf("\nOdd numbers: \n");
while (a<=b)
{
if (a%2!=0)
{
printf("%d ",a);
}
a++;
}

return 0;
}
