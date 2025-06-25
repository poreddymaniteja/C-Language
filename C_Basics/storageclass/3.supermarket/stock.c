#include<stdio.h>

extern int p,s;
int sell();
int purchase();
int as=500;

void availablestock()
{
printf("Available Stock: %d\n\n",as);
}

void addstock()
{

as=as+p;
//printf("Available Stock: %d\n",as);

}


void deletestock()
{
as = as-s;

//printf("Available Stock: %d\n",as);

}

