// WAP implements XOR functionality without using XOR(^) operator

#include<stdio.h>

int main()
{
int a,b,c;
printf("Enter two values: ");
scanf("%x%x",&a,&b);
c=(a & ~b) | (~a & b);
printf("XOR: %d\n",c);
return 0;
}

