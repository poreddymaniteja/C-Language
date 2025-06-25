// Find the power bill for the input number of units : //
//201 - 400 units : 100 + 0.65 per unit excess of 200//
//401 - 600 units : 230 + 0.80 per unit excess of 400//
//601 and above units : 390 + 1.00 per unit excess of 600 *//

#include<stdio.h>
int main()
{
float units,bill;
printf("enter the units\n");
scanf("%f",&units);
if(units==0 && units<=200)
printf("bill=100rs\n");
if(units>=200 && units<=400)
{
bill=units-200;
bill=100+(bill*0.65);
printf("%f\n",bill);
}
else if (units>=400 && units<=600)
{
bill=units-400;
bill=230+(bill*0.80);
printf("%f\n",bill);
}
else if (units>=600 && units>600)
{
bill = units-600;
bill=390+(bill*1.00);
printf("%f\n",bill);
 }
else
printf("invlaid");
return 0;
}
