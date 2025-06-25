// For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read the number of calls made and compute and print the bill //

#include<stdio.h>
int main()
{
int a;
float bill;
printf("Enter the value of a: ");
scanf("%d",&a);

if(a<=100)
{
printf("for %d calls the cost is 250/- \n",a);
}

else if(a>100)
{
bill=((a-100)*1.25)+250;
printf("the cost of %d calls is: %f\n",a,bill);
}

return 0;
}
