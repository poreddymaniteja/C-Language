/*
WAP - for the 4 departments of a supermarket : Sales, Purchase, Stock and SuperMarket in four different source code files.
Stock : Maintains a variable for available stock.
Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling, check if enough stock is available.
Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit.
*/

#include<stdio.h>

void purchase();
void availablestock();
void sell();

int main()
{

int  choice=1;

while(choice)
{

printf("Enter your choice: \n\n");
printf("1.Available Stock \n");
printf("2.Purchase items \n");
printf("3.Sell items \n");
printf("4.Quit \n\n");

scanf("%d",&choice);

switch (choice)
{
case 1: availablestock(); break;

case 2: purchase(); break;

case 3: sell(); break;

case 4: printf("Thank you\n"); choice=0; break;

default: printf("Enter the correct choice\n"); choice=0; break;
}

}
return 0;
}
