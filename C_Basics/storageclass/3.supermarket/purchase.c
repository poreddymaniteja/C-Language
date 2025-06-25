#include<stdio.h>

extern int as;
void availablestock();
int addstock(int);
int p;
void purchase()
{

printf("Enter the purchase value: ");
scanf("%d",&p);

if (as+p<=1000)
{

addstock(p);
availablestock();
printf("Thanks for the purchase\n");

}

else
{
printf("Stock is Full\n");
}

}
