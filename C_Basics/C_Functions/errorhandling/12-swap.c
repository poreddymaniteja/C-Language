// Write a function ,that can take two integers, swap their values and print their new values. return type should be void. function should print the values.


#include<stdio.h>
int swap(int a,int b)
{
int c;
c=a;
a=b;
b=c;
printf("After swapping the values : %d %d",a,b);
}
 
int main()
{
int a,b,d;
printf("Entet the values :");
scanf("%d%d",&a,&b);
d=swap(a,b);
return 0;
}
