// WAP Check if the 20th bit of a 32-bit integer is on or off

#include<stdio.h>
//#define CHECK(x,p) x&(0x1<<p)?ON:OFF
int main()
{
int x,p=20;
int size;

printf("Enter the value: ");
scanf("%x",&x);

printf("int size : %d\n",size=sizeof(x));

if(x&(0x1<<p))
printf("ON\n");
else
printf("OFF\n");

return 0;
}

