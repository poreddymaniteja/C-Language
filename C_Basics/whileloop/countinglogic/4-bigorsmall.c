// Read n numbers from the user, and while reading every number, print if the number is bigger or smaller than the previous number. For the first number, there won't be any output as it is the first one //

#include<stdio.h>
int main()
{
int n,a,b=0;
printf("Enter n character: ");
scanf("%d",&n);

while(n>0)
{
printf("enter the value of a: ");
scanf("%d",&a);

if(a>b)
printf("%d is bigger than %d\n",a,b);

else
printf("%d is smaller than %d\n",a,b);

b=a;
n--;
}

return 0;
}
