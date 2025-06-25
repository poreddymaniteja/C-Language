// WAP multiply a number by 9 using bit shift

#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value :");
scanf("%x",&a);
b=a;
a=a<<3;
a+=b;
printf("%d\n",a);
return 0;
}
