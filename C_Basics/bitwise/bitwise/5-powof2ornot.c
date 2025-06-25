// WAP whether a number is a power of 2 or not

#include<stdio.h>

int main()
{
int x,n;
int size;
int i,count=0;
printf("Enter value: ");
scanf("%x",&x);
size=sizeof(x);
n=x;
for(i=0;i<size*8;i++)
{
if(x&(0x1<<(size*8)-1))
{
//printf("1 ");
count++;
}
x=x<<1;
}

printf("decimal: %d\n",n);

if(count==1)
printf("It is power of 2\n");
else
printf("It is not a power of 2\n");

return 0;
}

