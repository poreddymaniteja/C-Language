// Read  n numbers from the user ,and print the smallest number of all //

#include<stdio.h>
int main()
{
int a,b,n,small=0;
printf("Enter n characters: ");
scanf("%d",&n);

printf("Enter value: ");
scanf("%d",&a);

small=a;
n--;

while(n>0)
{
printf("Enter value: ");
scanf("%d",&b);

if (small>b)
{
small=b;
}
n--;
}
printf("The smallet among them: %d\n",small);

return 0;
}

