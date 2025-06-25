//3-simpleinterest//

#include<stdio.h>
int main()
{
int p,n;
float r,m,si;
printf("Enter the principle amount and time taken in months : \n");
scanf("%d%d",&p,&n);
printf("Enter the rate of intrest :");
scanf("%f",&r);
m = n/12.0;
printf("Months convertd into years : %f\n",m);
si = (p*m*r)/100;
printf("Simple Intrest : %f\n",si);
return 0;
}

