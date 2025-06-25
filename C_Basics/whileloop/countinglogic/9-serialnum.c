// Read two numbers from the user, and print all serial numbers between those numbers //

#include<stdio.h>
int main()
{
int a,b,c;

printf("Enter starting value: ");
scanf("%d",&a);
printf("Enter the ending value: ");
scanf("%d",&b);

while (a>=0 && b>=a)
{
c=b-a;
printf("%d ",a);
a++;
c--;
}

return 0;

}
