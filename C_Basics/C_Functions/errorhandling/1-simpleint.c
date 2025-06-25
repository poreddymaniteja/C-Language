// Write a function to calculate simple interest. Call it in main function with appropriate inputs and print the total amount the user will get after the tenure (principle + interest) //

#include<stdio.h>

float simple_interest(int p,int n, float r)
 
{

float t,si;
t=(n/12.0);
si=((p*t*r)/100);
  
return si;
  
}
  
int main()
{
  
int p,t;
float r,si;
 
printf("Enter the Principle amount, rate of interest and Time period in years: ");
scanf("%d%f%d",&p,&r,&t);

if (p<=0 || r<=0 || t<=0)
{
printf("Please enter the valid principle amount/rate of interest/time period\n");

return 1;
}

si=simple_interest (p,t,r); //call function//
 
printf("simple interest is: %f\n",si);

// printf("simple interest is: %f\n",simple_interest(p,t,r));

printf("Total amount: %f\n",si+p);

return 0;

}

