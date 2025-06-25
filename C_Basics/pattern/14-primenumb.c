/* Write a program to print all prime numbers between 2 given integers.

eg., input: 10 20
prime numbers between 10 & 20 are: 11 13 17 19

*/

#include<stdio.h>
int main()
{
int i,j,a,b;

printf("Enter from start to end numbers: ");
scanf("%d%d",&a,&b);

if(a>b)
{
a=a+b;
b=a-b;
a=a-b;
}

printf("prime numbers between %d and %d are: ",a,b);

for(i=a+1;i<=b;i++)
{

int c=0;
for(j=1;j<=i;j++)
{

if(i%j==0)

c++;
}

if(c==2)
{
printf("%d ",i);
}

}

printf("\n");

return 0;

} 
