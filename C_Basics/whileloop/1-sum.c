// Write  a program to read n numbers from the keyboard and find their sum //

#include<stdio.h>
int main()
{
int i,a,sum=0;
printf("Enter the no of iterations: ");
scanf("%d",&i);

while (i>0)
{
printf("Enter the any value: ");
scanf("%d",&a);
sum+=a;
i--;
}

printf("sum is %d\n",sum);
return 0;
}
