// Read n numbers in ascending order. If a number entered is bigger than the previous number, then count it. If it is smaller, then don't count it, instead let the loop repeat itself and read another number. //

#include<stdio.h>
int main()
{
int n,a,b,pre=0,count=0;
printf("Enter the n character: ");
scanf("%d",&n);

printf("Enter a number: ");
scanf("%d",&a);
pre=a;
n--;

while(n>0)
{
printf("Enter a number: ");
scanf("%d",&b);

if(pre<b)
{
count++;
pre=b;
}

n--;
}
printf("The count is %d\n",count);

return 0;
}


