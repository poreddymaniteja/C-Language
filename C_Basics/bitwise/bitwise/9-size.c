// WAP to implement the sizeof operation using the bitwise operator.

#include<stdio.h> 
int main()
{
int a=0x01;
int count=0;
//printf("Enter the value: ");
//scanf("%x",&a);

while(a!=0) //for(a=1;a<0;count++)
{
count++;
a=a<<1;
}

printf("size of variable: %d byte\n", (count/8));

return 0;
}

