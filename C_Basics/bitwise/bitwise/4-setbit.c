// WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?

#include<stdio.h>

/*
void binary(int x,int size)
{
int i=0,n=0,count=0;
n=x;
while(i<size*8)
{
if(x&(0x1<<(size*8)-1))
count=count++;
else
x=x<<1;

i++;
}
printf("Bit value of %d: %d\n",n,count);
}


int main()
{
int x;
int size;

printf("Enter a value: ");
scanf("%x",&x);

printf("size: %d\n",size=sizeof(x));

binary(x,size);

return 0;
}
*/

int main()
{
int x;
int size;
int i,n=0,count=0;
printf("Enter value: ");
scanf("%x",&x);
n=x;
size=sizeof(x);

for(i=0;i<size*8;i++)
{
if(x&(0x1<<(size*8)-1))
{
//printf("1 ");
count++;
}
x=x<<1;
}

printf("\nset value of %d: %d\n",n,count);

return 0;
}




