// Read two numbers from the user, and print all numbers in reverse order //

#include<stdio.h>
int main()
{
int a,b;

printf("Enter a and b: ");
scanf("%d%d",&a,&b);

while (b>=a)
{
printf("%d ",b);
b--;
}

return 0;
}
