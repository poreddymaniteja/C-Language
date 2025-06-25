// the sale price and profit of n items is given as inputs,  find the cost price of 1 item //
// eg., number of items : 15     //
// sale price of 15 items : 500  //
// profit : 50                   //
// cost price of each item: 30   //

#include<stdio.h>
int main ()
{
float sp,p; // sp=selling price, p=profit //
float cp; // cp=cost price //
int n;    // n=no.of items //

printf("enter the selling price, profit, no of items: /\n");
scanf("%f %f %d", &sp, &p, &n);
cp=(sp-p)/n;
printf("the cost price of item: %f\n",cp);
return 0;
}

