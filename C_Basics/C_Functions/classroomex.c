// simple interest

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

si=simple_interest (p,t,r); //call function//

printf("simple interest is: %f\n",si);

printf("simple interest is: %f\n",simple_interest(p,t,r));

return 0;
}


