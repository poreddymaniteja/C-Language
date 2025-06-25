// Write a function that takes an integer number as input and prints its multiplication table.return type is void //

#include<stdio.h>

void mul(int n)
{
int a,b;

printf("Enter the value <=20: ");
scanf("%d\n",&b);

for (a=1;a<=b;a++)
{
printf("%d*%d=%d\n",n,a,n*a);
}

}

int main()
{
int n,table;

printf("Enter the mul table you need: ");
scanf("%d",&n);

mul(n);

// printf("%d",table);
return 0;
}
