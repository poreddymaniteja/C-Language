// WAP to convert Little endian integer to Big endian integer

#include<stdio.h>
int main()
{
unsigned int a,y;
printf("Enter the number :");
scanf("%x",&a);
y=( (a<<24) | (a>>24) | ((a<<8)&0x00ff0000) | (a>>8) & (0x0000ff00) );
printf("%x\n",y);
return 0;
} 
