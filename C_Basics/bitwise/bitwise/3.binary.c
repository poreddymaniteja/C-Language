/* Write a printbinary(int , int ) function consists of 2 integer variables. First one is the value of the variable and the second one is the size of the variable. 
Example: 
char x=5; 
printbinary(x,sizeof(x)); 
output:  00000101 */

#include<stdio.h>

void printbinary(int x,int size)
{
int i=0;
while(i<size*8)
{
if(x&(0x1<<(size*8)-1))
printf("1 ");
else
printf("0 ");
x=x<<1;
i++;
}
printf("\n");
}

int main()
{
int x;
int size;

printf("Enter the value: ");
scanf("%x",&x);

printf("size : %d\n",size=sizeof(x));

printbinary(x,size);

return 0;
}
