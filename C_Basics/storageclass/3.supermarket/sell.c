#include<stdio.h>

extern int as;
void availablestock();
int s;
int deletestock(int);

void sell()
{

printf("Enter the no of items you want to sell: ");
scanf("%d",&s);

if (s<=as)
{
deletestock(s);
availablestock();
}

else
{
printf("Out of Stock\n");
}

}

